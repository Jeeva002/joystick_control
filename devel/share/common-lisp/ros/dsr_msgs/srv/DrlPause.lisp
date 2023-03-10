; Auto-generated. Do not edit!


(cl:in-package dsr_msgs-srv)


;//! \htmlinclude DrlPause-request.msg.html

(cl:defclass <DrlPause-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass DrlPause-request (<DrlPause-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DrlPause-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DrlPause-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dsr_msgs-srv:<DrlPause-request> is deprecated: use dsr_msgs-srv:DrlPause-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DrlPause-request>) ostream)
  "Serializes a message object of type '<DrlPause-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DrlPause-request>) istream)
  "Deserializes a message object of type '<DrlPause-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DrlPause-request>)))
  "Returns string type for a service object of type '<DrlPause-request>"
  "dsr_msgs/DrlPauseRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DrlPause-request)))
  "Returns string type for a service object of type 'DrlPause-request"
  "dsr_msgs/DrlPauseRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DrlPause-request>)))
  "Returns md5sum for a message object of type '<DrlPause-request>"
  "358e233cde0c8a8bcfea4ce193f8fc15")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DrlPause-request)))
  "Returns md5sum for a message object of type 'DrlPause-request"
  "358e233cde0c8a8bcfea4ce193f8fc15")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DrlPause-request>)))
  "Returns full string definition for message of type '<DrlPause-request>"
  (cl:format cl:nil "#____________________________________________________________________________________________~%# drl_script_pause  ~%# This service is used to stop the currently executing DRL program from the robot controller.~%#____________________________________________________________________________________________~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DrlPause-request)))
  "Returns full string definition for message of type 'DrlPause-request"
  (cl:format cl:nil "#____________________________________________________________________________________________~%# drl_script_pause  ~%# This service is used to stop the currently executing DRL program from the robot controller.~%#____________________________________________________________________________________________~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DrlPause-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DrlPause-request>))
  "Converts a ROS message object to a list"
  (cl:list 'DrlPause-request
))
;//! \htmlinclude DrlPause-response.msg.html

(cl:defclass <DrlPause-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass DrlPause-response (<DrlPause-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DrlPause-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DrlPause-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dsr_msgs-srv:<DrlPause-response> is deprecated: use dsr_msgs-srv:DrlPause-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <DrlPause-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dsr_msgs-srv:success-val is deprecated.  Use dsr_msgs-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DrlPause-response>) ostream)
  "Serializes a message object of type '<DrlPause-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DrlPause-response>) istream)
  "Deserializes a message object of type '<DrlPause-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DrlPause-response>)))
  "Returns string type for a service object of type '<DrlPause-response>"
  "dsr_msgs/DrlPauseResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DrlPause-response)))
  "Returns string type for a service object of type 'DrlPause-response"
  "dsr_msgs/DrlPauseResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DrlPause-response>)))
  "Returns md5sum for a message object of type '<DrlPause-response>"
  "358e233cde0c8a8bcfea4ce193f8fc15")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DrlPause-response)))
  "Returns md5sum for a message object of type 'DrlPause-response"
  "358e233cde0c8a8bcfea4ce193f8fc15")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DrlPause-response>)))
  "Returns full string definition for message of type '<DrlPause-response>"
  (cl:format cl:nil "bool success~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DrlPause-response)))
  "Returns full string definition for message of type 'DrlPause-response"
  (cl:format cl:nil "bool success~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DrlPause-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DrlPause-response>))
  "Converts a ROS message object to a list"
  (cl:list 'DrlPause-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'DrlPause)))
  'DrlPause-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'DrlPause)))
  'DrlPause-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DrlPause)))
  "Returns string type for a service object of type '<DrlPause>"
  "dsr_msgs/DrlPause")