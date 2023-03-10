// Auto-generated. Do not edit!

// (in-package dsr_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class GetExternalTorqueRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
    }
    else {
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetExternalTorqueRequest
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetExternalTorqueRequest
    let len;
    let data = new GetExternalTorqueRequest(null);
    return data;
  }

  static getMessageSize(object) {
    return 0;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dsr_msgs/GetExternalTorqueRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd41d8cd98f00b204e9800998ecf8427e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    #____________________________________________________________________________________________
    # get_external_torque()
    # returns the torque value generated by the external force on each current joint.
    #____________________________________________________________________________________________
    # This service returns the torque value generated by the external force on each current joint.
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetExternalTorqueRequest(null);
    return resolved;
    }
};

class GetExternalTorqueResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.ext_torque = null;
      this.success = null;
    }
    else {
      if (initObj.hasOwnProperty('ext_torque')) {
        this.ext_torque = initObj.ext_torque
      }
      else {
        this.ext_torque = new Array(6).fill(0);
      }
      if (initObj.hasOwnProperty('success')) {
        this.success = initObj.success
      }
      else {
        this.success = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetExternalTorqueResponse
    // Check that the constant length array field [ext_torque] has the right length
    if (obj.ext_torque.length !== 6) {
      throw new Error('Unable to serialize array field ext_torque - length must be 6')
    }
    // Serialize message field [ext_torque]
    bufferOffset = _arraySerializer.float64(obj.ext_torque, buffer, bufferOffset, 6);
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetExternalTorqueResponse
    let len;
    let data = new GetExternalTorqueResponse(null);
    // Deserialize message field [ext_torque]
    data.ext_torque = _arrayDeserializer.float64(buffer, bufferOffset, 6)
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 49;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dsr_msgs/GetExternalTorqueResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3d5aa349d88cb86072770e6d3c9a7f66';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64[6] ext_torque       #Torque value generated by an external force
    bool       success
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetExternalTorqueResponse(null);
    if (msg.ext_torque !== undefined) {
      resolved.ext_torque = msg.ext_torque;
    }
    else {
      resolved.ext_torque = new Array(6).fill(0)
    }

    if (msg.success !== undefined) {
      resolved.success = msg.success;
    }
    else {
      resolved.success = false
    }

    return resolved;
    }
};

module.exports = {
  Request: GetExternalTorqueRequest,
  Response: GetExternalTorqueResponse,
  md5sum() { return '3d5aa349d88cb86072770e6d3c9a7f66'; },
  datatype() { return 'dsr_msgs/GetExternalTorque'; }
};
