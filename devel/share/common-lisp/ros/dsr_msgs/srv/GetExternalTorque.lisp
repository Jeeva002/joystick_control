; Auto-generated. Do not edit!


(cl:in-package dsr_msgs-srv)


;//! \htmlinclude GetExternalTorque-request.msg.html

(cl:defclass <GetExternalTorque-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass GetExternalTorque-request (<GetExternalTorque-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetExternalTorque-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetExternalTorque-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dsr_msgs-srv:<GetExternalTorque-request> is deprecated: use dsr_msgs-srv:GetExternalTorque-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetExternalTorque-request>) ostream)
  "Serializes a message object of type '<GetExternalTorque-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetExternalTorque-request>) istream)
  "Deserializes a message object of type '<GetExternalTorque-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetExternalTorque-request>)))
  "Returns string type for a service object of type '<GetExternalTorque-request>"
  "dsr_msgs/GetExternalTorqueRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetExternalTorque-request)))
  "Returns string type for a service object of type 'GetExternalTorque-request"
  "dsr_msgs/GetExternalTorqueRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetExternalTorque-request>)))
  "Returns md5sum for a message object of type '<GetExternalTorque-request>"
  "3d5aa349d88cb86072770e6d3c9a7f66")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetExternalTorque-request)))
  "Returns md5sum for a message object of type 'GetExternalTorque-request"
  "3d5aa349d88cb86072770e6d3c9a7f66")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetExternalTorque-request>)))
  "Returns full string definition for message of type '<GetExternalTorque-request>"
  (cl:format cl:nil "#____________________________________________________________________________________________~%# get_external_torque()~%# returns the torque value generated by the external force on each current joint.~%#____________________________________________________________________________________________~%# This service returns the torque value generated by the external force on each current joint.~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetExternalTorque-request)))
  "Returns full string definition for message of type 'GetExternalTorque-request"
  (cl:format cl:nil "#____________________________________________________________________________________________~%# get_external_torque()~%# returns the torque value generated by the external force on each current joint.~%#____________________________________________________________________________________________~%# This service returns the torque value generated by the external force on each current joint.~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetExternalTorque-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetExternalTorque-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GetExternalTorque-request
))
;//! \htmlinclude GetExternalTorque-response.msg.html

(cl:defclass <GetExternalTorque-response> (roslisp-msg-protocol:ros-message)
  ((ext_torque
    :reader ext_torque
    :initarg :ext_torque
    :type (cl:vector cl:float)
   :initform (cl:make-array 6 :element-type 'cl:float :initial-element 0.0))
   (success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass GetExternalTorque-response (<GetExternalTorque-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetExternalTorque-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetExternalTorque-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dsr_msgs-srv:<GetExternalTorque-response> is deprecated: use dsr_msgs-srv:GetExternalTorque-response instead.")))

(cl:ensure-generic-function 'ext_torque-val :lambda-list '(m))
(cl:defmethod ext_torque-val ((m <GetExternalTorque-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dsr_msgs-srv:ext_torque-val is deprecated.  Use dsr_msgs-srv:ext_torque instead.")
  (ext_torque m))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <GetExternalTorque-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dsr_msgs-srv:success-val is deprecated.  Use dsr_msgs-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetExternalTorque-response>) ostream)
  "Serializes a message object of type '<GetExternalTorque-response>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'ext_torque))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetExternalTorque-response>) istream)
  "Deserializes a message object of type '<GetExternalTorque-response>"
  (cl:setf (cl:slot-value msg 'ext_torque) (cl:make-array 6))
  (cl:let ((vals (cl:slot-value msg 'ext_torque)))
    (cl:dotimes (i 6)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetExternalTorque-response>)))
  "Returns string type for a service object of type '<GetExternalTorque-response>"
  "dsr_msgs/GetExternalTorqueResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetExternalTorque-response)))
  "Returns string type for a service object of type 'GetExternalTorque-response"
  "dsr_msgs/GetExternalTorqueResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetExternalTorque-response>)))
  "Returns md5sum for a message object of type '<GetExternalTorque-response>"
  "3d5aa349d88cb86072770e6d3c9a7f66")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetExternalTorque-response)))
  "Returns md5sum for a message object of type 'GetExternalTorque-response"
  "3d5aa349d88cb86072770e6d3c9a7f66")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetExternalTorque-response>)))
  "Returns full string definition for message of type '<GetExternalTorque-response>"
  (cl:format cl:nil "float64[6] ext_torque       #Torque value generated by an external force~%bool       success~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetExternalTorque-response)))
  "Returns full string definition for message of type 'GetExternalTorque-response"
  (cl:format cl:nil "float64[6] ext_torque       #Torque value generated by an external force~%bool       success~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetExternalTorque-response>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'ext_torque) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetExternalTorque-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GetExternalTorque-response
    (cl:cons ':ext_torque (ext_torque msg))
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GetExternalTorque)))
  'GetExternalTorque-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GetExternalTorque)))
  'GetExternalTorque-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetExternalTorque)))
  "Returns string type for a service object of type '<GetExternalTorque>"
  "dsr_msgs/GetExternalTorque")