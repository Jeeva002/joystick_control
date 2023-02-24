# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dsr_msgs/LogAlarm.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class LogAlarm(genpy.Message):
  _md5sum = "c127c7c1149264259595eb8c3ff9972c"
  _type = "dsr_msgs/LogAlarm"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#____________________________________________________________________________________________
# log of alarm
#____________________________________________________________________________________________

int32         level
int32         group
int32         index
string[3]     param"""
  __slots__ = ['level','group','index','param']
  _slot_types = ['int32','int32','int32','string[3]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       level,group,index,param

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(LogAlarm, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.level is None:
        self.level = 0
      if self.group is None:
        self.group = 0
      if self.index is None:
        self.index = 0
      if self.param is None:
        self.param = [''] * 3
    else:
      self.level = 0
      self.group = 0
      self.index = 0
      self.param = [''] * 3

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
      buff.write(_get_struct_3i().pack(_x.level, _x.group, _x.index))
      if len(self.param) != 3:
        self._check_types(ValueError("Expecting %s items but found %s when writing '%s'" % (3, len(self.param), 'self.param')))
      for val1 in self.param:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.Struct('<I%ss'%length).pack(length, val1))
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
      end += 12
      (_x.level, _x.group, _x.index,) = _get_struct_3i().unpack(str[start:end])
      self.param = []
      for i in range(0, 3):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1 = str[start:end]
        self.param.append(val1)
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
      buff.write(_get_struct_3i().pack(_x.level, _x.group, _x.index))
      if len(self.param) != 3:
        self._check_types(ValueError("Expecting %s items but found %s when writing '%s'" % (3, len(self.param), 'self.param')))
      for val1 in self.param:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.Struct('<I%ss'%length).pack(length, val1))
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
      end += 12
      (_x.level, _x.group, _x.index,) = _get_struct_3i().unpack(str[start:end])
      self.param = []
      for i in range(0, 3):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1 = str[start:end]
        self.param.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3i = None
def _get_struct_3i():
    global _struct_3i
    if _struct_3i is None:
        _struct_3i = struct.Struct("<3i")
    return _struct_3i