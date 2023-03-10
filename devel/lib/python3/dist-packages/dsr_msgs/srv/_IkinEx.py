# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dsr_msgs/IkinExRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class IkinExRequest(genpy.Message):
  _md5sum = "3b0ee6e73013bde4af34cf17c72d4686"
  _type = "dsr_msgs/IkinExRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#____________________________________________________________________________________________
# ikin_ex  
#____________________________________________________________________________________________

float64[6] pos               # task pos(posx)  
int8       sol_space         # solution space : 0 ~ 7
int8       ref     #= 0      # DR_BASE(0), DR_WORLD(2)
int8       ref_pos_opt	     #  
"""
  __slots__ = ['pos','sol_space','ref','ref_pos_opt']
  _slot_types = ['float64[6]','int8','int8','int8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       pos,sol_space,ref,ref_pos_opt

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(IkinExRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.pos is None:
        self.pos = [0.] * 6
      if self.sol_space is None:
        self.sol_space = 0
      if self.ref is None:
        self.ref = 0
      if self.ref_pos_opt is None:
        self.ref_pos_opt = 0
    else:
      self.pos = [0.] * 6
      self.sol_space = 0
      self.ref = 0
      self.ref_pos_opt = 0

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
      buff.write(_get_struct_6d().pack(*self.pos))
      _x = self
      buff.write(_get_struct_3b().pack(_x.sol_space, _x.ref, _x.ref_pos_opt))
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
      end += 48
      self.pos = _get_struct_6d().unpack(str[start:end])
      _x = self
      start = end
      end += 3
      (_x.sol_space, _x.ref, _x.ref_pos_opt,) = _get_struct_3b().unpack(str[start:end])
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
      buff.write(self.pos.tostring())
      _x = self
      buff.write(_get_struct_3b().pack(_x.sol_space, _x.ref, _x.ref_pos_opt))
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
      end += 48
      self.pos = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=6)
      _x = self
      start = end
      end += 3
      (_x.sol_space, _x.ref, _x.ref_pos_opt,) = _get_struct_3b().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3b = None
def _get_struct_3b():
    global _struct_3b
    if _struct_3b is None:
        _struct_3b = struct.Struct("<3b")
    return _struct_3b
_struct_6d = None
def _get_struct_6d():
    global _struct_6d
    if _struct_6d is None:
        _struct_6d = struct.Struct("<6d")
    return _struct_6d
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dsr_msgs/IkinExResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class IkinExResponse(genpy.Message):
  _md5sum = "6a262c9bd7c19457d248b6a5e85981bc"
  _type = "dsr_msgs/IkinExResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float64[6] conv_posj         # joint pos(posj)  
bool       status
bool       success

"""
  __slots__ = ['conv_posj','status','success']
  _slot_types = ['float64[6]','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       conv_posj,status,success

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(IkinExResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.conv_posj is None:
        self.conv_posj = [0.] * 6
      if self.status is None:
        self.status = False
      if self.success is None:
        self.success = False
    else:
      self.conv_posj = [0.] * 6
      self.status = False
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
      buff.write(_get_struct_6d().pack(*self.conv_posj))
      _x = self
      buff.write(_get_struct_2B().pack(_x.status, _x.success))
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
      end += 48
      self.conv_posj = _get_struct_6d().unpack(str[start:end])
      _x = self
      start = end
      end += 2
      (_x.status, _x.success,) = _get_struct_2B().unpack(str[start:end])
      self.status = bool(self.status)
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
      buff.write(self.conv_posj.tostring())
      _x = self
      buff.write(_get_struct_2B().pack(_x.status, _x.success))
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
      end += 48
      self.conv_posj = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=6)
      _x = self
      start = end
      end += 2
      (_x.status, _x.success,) = _get_struct_2B().unpack(str[start:end])
      self.status = bool(self.status)
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B = None
def _get_struct_2B():
    global _struct_2B
    if _struct_2B is None:
        _struct_2B = struct.Struct("<2B")
    return _struct_2B
_struct_6d = None
def _get_struct_6d():
    global _struct_6d
    if _struct_6d is None:
        _struct_6d = struct.Struct("<6d")
    return _struct_6d
class IkinEx(object):
  _type          = 'dsr_msgs/IkinEx'
  _md5sum = '52c2edae66404c90e27c09703f4690c1'
  _request_class  = IkinExRequest
  _response_class = IkinExResponse
