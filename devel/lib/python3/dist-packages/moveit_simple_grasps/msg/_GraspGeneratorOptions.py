# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from moveit_simple_grasps/GraspGeneratorOptions.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GraspGeneratorOptions(genpy.Message):
  _md5sum = "99863eab001728611523218e2a9810a3"
  _type = "moveit_simple_grasps/GraspGeneratorOptions"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """uint8 grasp_axis
uint8 GRASP_AXIS_X = 0
uint8 GRASP_AXIS_Y = 1
uint8 GRASP_AXIS_Z = 2

uint8 grasp_direction
uint8 GRASP_DIRECTION_UP = 0
uint8 GRASP_DIRECTION_DOWN = 1

uint8 grasp_rotation
uint8 GRASP_ROTATION_HALF = 0
uint8 GRASP_ROTATION_FULL = 1
"""
  # Pseudo-constants
  GRASP_AXIS_X = 0
  GRASP_AXIS_Y = 1
  GRASP_AXIS_Z = 2
  GRASP_DIRECTION_UP = 0
  GRASP_DIRECTION_DOWN = 1
  GRASP_ROTATION_HALF = 0
  GRASP_ROTATION_FULL = 1

  __slots__ = ['grasp_axis','grasp_direction','grasp_rotation']
  _slot_types = ['uint8','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       grasp_axis,grasp_direction,grasp_rotation

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GraspGeneratorOptions, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.grasp_axis is None:
        self.grasp_axis = 0
      if self.grasp_direction is None:
        self.grasp_direction = 0
      if self.grasp_rotation is None:
        self.grasp_rotation = 0
    else:
      self.grasp_axis = 0
      self.grasp_direction = 0
      self.grasp_rotation = 0

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
      buff.write(_get_struct_3B().pack(_x.grasp_axis, _x.grasp_direction, _x.grasp_rotation))
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
      end += 3
      (_x.grasp_axis, _x.grasp_direction, _x.grasp_rotation,) = _get_struct_3B().unpack(str[start:end])
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
      buff.write(_get_struct_3B().pack(_x.grasp_axis, _x.grasp_direction, _x.grasp_rotation))
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
      end += 3
      (_x.grasp_axis, _x.grasp_direction, _x.grasp_rotation,) = _get_struct_3B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3B = None
def _get_struct_3B():
    global _struct_3B
    if _struct_3B is None:
        _struct_3B = struct.Struct("<3B")
    return _struct_3B