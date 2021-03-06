# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from my_project_test/ctr_can.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class ctr_can(genpy.Message):
  _md5sum = "00d4bf39ad2d912eaada8c7a2fb50009"
  _type = "my_project_test/ctr_can"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """#topic_nam 为 /can_listener

Header header
int16 oemstateflag

#oem代表车体层,指的是车体硬件层 vcu_av指的是自动驾驶系统控制单元(可以理解为工控机或者tx2这样的平台)
#灯光控制 bit0:蓝灯  bit1:橘色灯 bit2:红色灯 对应的位置1为生效
#cmd =1 点亮蓝色灯 / cmd =2 点亮橘色灯 / cmd = 4 点亮红色灯
int16 ctrl_cmds_to_lights_of_oem_vehicle

#安全系统控制车辆 bit0:停车 bit1:打火 bit2:熄火 对应的位置1为生效
#cmd =1 停车 / cmd =2 打火 / cmd = 4 熄火
int16 safe_ctrl_power_cmds_to_oem_vehicle

float32 throttlecmd	#油门指令 0-100
float32 breakcmd	#机械制动指令 0-100
int16 gearcmd		# 档位 0xFB=P;0xFC=D;0xDF=R;0x7D=N;
float32 steerangle	#左轮转角 -27~21
float32 Retarder_cmd  	#电制动指令 0-100
int16  parkbreak	#与档位合并 未使用
int8  horn 		#喇叭

#以下为各种灯光 1点亮 0熄灭
int8  low_beams 	#近光灯 1点亮 0熄灭
int8  high_beams 	#远光灯
int8  turn_indicators	#转向指示状态
int8  marker_lights 	#示廓灯
int8  hazard_lights 	#警示灯(两侧转向灯)

int8  dump_bed		#举升高度 0-100 百分比
int8  auto_lube 	#未使用
int8  rest 		#未使用
int8  load_break 	#装载制动 0/1

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id
"""
  __slots__ = ['header','oemstateflag','ctrl_cmds_to_lights_of_oem_vehicle','safe_ctrl_power_cmds_to_oem_vehicle','throttlecmd','breakcmd','gearcmd','steerangle','Retarder_cmd','parkbreak','horn','low_beams','high_beams','turn_indicators','marker_lights','hazard_lights','dump_bed','auto_lube','rest','load_break']
  _slot_types = ['std_msgs/Header','int16','int16','int16','float32','float32','int16','float32','float32','int16','int8','int8','int8','int8','int8','int8','int8','int8','int8','int8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,oemstateflag,ctrl_cmds_to_lights_of_oem_vehicle,safe_ctrl_power_cmds_to_oem_vehicle,throttlecmd,breakcmd,gearcmd,steerangle,Retarder_cmd,parkbreak,horn,low_beams,high_beams,turn_indicators,marker_lights,hazard_lights,dump_bed,auto_lube,rest,load_break

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ctr_can, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.oemstateflag is None:
        self.oemstateflag = 0
      if self.ctrl_cmds_to_lights_of_oem_vehicle is None:
        self.ctrl_cmds_to_lights_of_oem_vehicle = 0
      if self.safe_ctrl_power_cmds_to_oem_vehicle is None:
        self.safe_ctrl_power_cmds_to_oem_vehicle = 0
      if self.throttlecmd is None:
        self.throttlecmd = 0.
      if self.breakcmd is None:
        self.breakcmd = 0.
      if self.gearcmd is None:
        self.gearcmd = 0
      if self.steerangle is None:
        self.steerangle = 0.
      if self.Retarder_cmd is None:
        self.Retarder_cmd = 0.
      if self.parkbreak is None:
        self.parkbreak = 0
      if self.horn is None:
        self.horn = 0
      if self.low_beams is None:
        self.low_beams = 0
      if self.high_beams is None:
        self.high_beams = 0
      if self.turn_indicators is None:
        self.turn_indicators = 0
      if self.marker_lights is None:
        self.marker_lights = 0
      if self.hazard_lights is None:
        self.hazard_lights = 0
      if self.dump_bed is None:
        self.dump_bed = 0
      if self.auto_lube is None:
        self.auto_lube = 0
      if self.rest is None:
        self.rest = 0
      if self.load_break is None:
        self.load_break = 0
    else:
      self.header = std_msgs.msg.Header()
      self.oemstateflag = 0
      self.ctrl_cmds_to_lights_of_oem_vehicle = 0
      self.safe_ctrl_power_cmds_to_oem_vehicle = 0
      self.throttlecmd = 0.
      self.breakcmd = 0.
      self.gearcmd = 0
      self.steerangle = 0.
      self.Retarder_cmd = 0.
      self.parkbreak = 0
      self.horn = 0
      self.low_beams = 0
      self.high_beams = 0
      self.turn_indicators = 0
      self.marker_lights = 0
      self.hazard_lights = 0
      self.dump_bed = 0
      self.auto_lube = 0
      self.rest = 0
      self.load_break = 0

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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_3h2fh2fh10b().pack(_x.oemstateflag, _x.ctrl_cmds_to_lights_of_oem_vehicle, _x.safe_ctrl_power_cmds_to_oem_vehicle, _x.throttlecmd, _x.breakcmd, _x.gearcmd, _x.steerangle, _x.Retarder_cmd, _x.parkbreak, _x.horn, _x.low_beams, _x.high_beams, _x.turn_indicators, _x.marker_lights, _x.hazard_lights, _x.dump_bed, _x.auto_lube, _x.rest, _x.load_break))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 36
      (_x.oemstateflag, _x.ctrl_cmds_to_lights_of_oem_vehicle, _x.safe_ctrl_power_cmds_to_oem_vehicle, _x.throttlecmd, _x.breakcmd, _x.gearcmd, _x.steerangle, _x.Retarder_cmd, _x.parkbreak, _x.horn, _x.low_beams, _x.high_beams, _x.turn_indicators, _x.marker_lights, _x.hazard_lights, _x.dump_bed, _x.auto_lube, _x.rest, _x.load_break,) = _get_struct_3h2fh2fh10b().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_3h2fh2fh10b().pack(_x.oemstateflag, _x.ctrl_cmds_to_lights_of_oem_vehicle, _x.safe_ctrl_power_cmds_to_oem_vehicle, _x.throttlecmd, _x.breakcmd, _x.gearcmd, _x.steerangle, _x.Retarder_cmd, _x.parkbreak, _x.horn, _x.low_beams, _x.high_beams, _x.turn_indicators, _x.marker_lights, _x.hazard_lights, _x.dump_bed, _x.auto_lube, _x.rest, _x.load_break))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 36
      (_x.oemstateflag, _x.ctrl_cmds_to_lights_of_oem_vehicle, _x.safe_ctrl_power_cmds_to_oem_vehicle, _x.throttlecmd, _x.breakcmd, _x.gearcmd, _x.steerangle, _x.Retarder_cmd, _x.parkbreak, _x.horn, _x.low_beams, _x.high_beams, _x.turn_indicators, _x.marker_lights, _x.hazard_lights, _x.dump_bed, _x.auto_lube, _x.rest, _x.load_break,) = _get_struct_3h2fh2fh10b().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3h2fh2fh10b = None
def _get_struct_3h2fh2fh10b():
    global _struct_3h2fh2fh10b
    if _struct_3h2fh2fh10b is None:
        _struct_3h2fh2fh10b = struct.Struct("<3h2fh2fh10b")
    return _struct_3h2fh2fh10b
