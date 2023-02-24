# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dsr_msgs/TransRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class TransRequest(genpy.Message):
  _md5sum = "7ea759998e0dd768f4e6a42af908529b"
  _type = "dsr_msgs/TransRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#____________________________________________________________________________________________
# trans  
#____________________________________________________________________________________________

float64[6] pos               # task pos(posx)  
float64[6] delta             # delta (posx)  
int8       ref     #= 0      # DR_BASE(0), DR_TOOL(1), DR_WORLD(2)
                             # <DR_WORLD is only available in M2.40 or later> 
int8       ref_out #= 0      # DR_BASE(0), DR_WORLD(2)
                             # <ref_out is only available in M2.40 or later>
"""
  __slots__ = ['pos','delta','ref','ref_out']
  _slot_types = ['float64[6]','float64[6]','int8','int8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       pos,delta,ref,ref_out

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(TransRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.pos is None:
        self.pos = [0.] * 6
      if self.delta is None:
        self.delta = [0.] * 6
      if self.ref is None:
        self.ref = 0
      if self.ref_out is None:
        self.ref_out = 0
    else:
      self.pos = [0.] * 6
      self.delta = [0.] * 6
      self.ref = 0
      self.ref_out = 0

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
      buff.write(_get_struct_6d().pack(*self.delta))
      _x = self
      buff.write(_get_struct_2b().pack(_x.ref, _x.ref_out))
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
      start = end
      end += 48
      self.delta = _get_struct_6d().unpack(str[start:end])
      _x = self
      start = end
      end += 2
      (_x.ref, _x.ref_out,) = _get_struct_2b().unpack(str[start:end])
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
      buff.write(self.delta.tostring())
      _x = self
      buff.write(_get_struct_2b().pack(_x.ref, _x.ref_out))
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
      start = end
      end += 48
      self.delta = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=6)
      _x = self
      start = end
      end += 2
      (_x.ref, _x.ref_out,) = _get_struct_2b().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2b = None
def _get_struct_2b():
    global _struct_2b
    if _struct_2b is None:
        _struct_2b = struct.Struct("<2b")
    return _struct_2b
_struct_6d = None
def _get_struct_6d():
    global _struct_6d
    if _struct_6d is None:
        _struct_6d = struct.Struct("<6d")
    return _struct_6d
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dsr_msgs/TransResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class TransResponse(genpy.Message):
  _md5sum = "f4be8aedbb129060dd973de94cc35bcc"
  _type = "dsr_msgs/TransResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float64[6] trans_pos         # trans pos(posx) 
bool       success
"""
  __slots__ = ['trans_pos','success']
  _slot_types = ['float64[6]','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       trans_pos,success

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(TransResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.trans_pos is None:
        self.trans_pos = [0.] * 6
      if self.success is None:
        self.success = False
    else:
      self.trans_pos = [0.] * 6
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
      buff.write(_get_struct_6d().pack(*self.trans_pos))
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
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
      self.trans_pos = _get_struct_6d().unpack(str[start:end])
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
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
      buff.write(self.trans_pos.tostring())
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
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
      self.trans_pos = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=6)
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
      self.success = bool(self.success)
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
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
class Trans(object):
  _type          = 'dsr_msgs/Trans'
  _md5sum = '2cc8472f65a9eb8b986e1489e30025bf'
  _request_class  = TransRequest
  _response_class = TransResponse
