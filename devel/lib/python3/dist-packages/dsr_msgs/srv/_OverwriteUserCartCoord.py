# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dsr_msgs/OverwriteUserCartCoordRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class OverwriteUserCartCoordRequest(genpy.Message):
  _md5sum = "b97db28da118b01a5d8b46ef90e6e014"
  _type = "dsr_msgs/OverwriteUserCartCoordRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#____________________________________________________________________________________________
# overwrite_user_cart_coord   
#____________________________________________________________________________________________
# This service is only available in M2.50 or later

int8       id                # ID of user coord 
float64[6] pos               # task pos(posx)  
int8       ref        #= 0   # DR_BASE(0), DR_WORLD(2)
"""
  __slots__ = ['id','pos','ref']
  _slot_types = ['int8','float64[6]','int8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       id,pos,ref

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(OverwriteUserCartCoordRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.id is None:
        self.id = 0
      if self.pos is None:
        self.pos = [0.] * 6
      if self.ref is None:
        self.ref = 0
    else:
      self.id = 0
      self.pos = [0.] * 6
      self.ref = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.id
      buff.write(_get_struct_b().pack(_x))
      buff.write(_get_struct_6d().pack(*self.pos))
      _x = self.ref
      buff.write(_get_struct_b().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.id,) = _get_struct_b().unpack(str[start:end])
      start = end
      end += 48
      self.pos = _get_struct_6d().unpack(str[start:end])
      start = end
      end += 1
      (self.ref,) = _get_struct_b().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.id
      buff.write(_get_struct_b().pack(_x))
      buff.write(self.pos.tostring())
      _x = self.ref
      buff.write(_get_struct_b().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.id,) = _get_struct_b().unpack(str[start:end])
      start = end
      end += 48
      self.pos = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=6)
      start = end
      end += 1
      (self.ref,) = _get_struct_b().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6d = None
def _get_struct_6d():
    global _struct_6d
    if _struct_6d is None:
        _struct_6d = struct.Struct("<6d")
    return _struct_6d
_struct_b = None
def _get_struct_b():
    global _struct_b
    if _struct_b is None:
        _struct_b = struct.Struct("<b")
    return _struct_b
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dsr_msgs/OverwriteUserCartCoordResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class OverwriteUserCartCoordResponse(genpy.Message):
  _md5sum = "5845c23151db63ce4fa936d927189f8d"
  _type = "dsr_msgs/OverwriteUserCartCoordResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """int8       id                # Successful coordinate setting, Set user coordinate ID (101 - 200)
                             # (-1) Failed coordinate setting
bool       success                             
"""
  __slots__ = ['id','success']
  _slot_types = ['int8','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       id,success

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(OverwriteUserCartCoordResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.id is None:
        self.id = 0
      if self.success is None:
        self.success = False
    else:
      self.id = 0
      self.success = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_bB().pack(_x.id, _x.success))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 2
      (_x.id, _x.success,) = _get_struct_bB().unpack(str[start:end])
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_bB().pack(_x.id, _x.success))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 2
      (_x.id, _x.success,) = _get_struct_bB().unpack(str[start:end])
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_bB = None
def _get_struct_bB():
    global _struct_bB
    if _struct_bB is None:
        _struct_bB = struct.Struct("<bB")
    return _struct_bB
class OverwriteUserCartCoord(object):
  _type          = 'dsr_msgs/OverwriteUserCartCoord'
  _md5sum = 'dd70ea2a3d7fe4aee2fb401824577ffd'
  _request_class  = OverwriteUserCartCoordRequest
  _response_class = OverwriteUserCartCoordResponse
