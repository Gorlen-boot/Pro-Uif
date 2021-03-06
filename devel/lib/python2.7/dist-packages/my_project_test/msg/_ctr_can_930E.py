# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from my_project_test/ctr_can_930E.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ctr_can_930E(genpy.Message):
  _md5sum = "3b6dfc91c7b544f837b327a2006cdc51"
  _type = "my_project_test/ctr_can_930E"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool driverMode_b 
bool gearP_b
bool loadBreak_b
bool turtle_b
bool takeover_b
int8 gear
int16 wheelAngle
uint16 velocity
uint16 rpm
uint8 vechleId
uint16 engineSpeed
uint16 batteryVoltage
uint8 faultTotal
uint8 dump_bed
uint8 loading
uint8 faultCode
int8  elecControlTemp
uint8 faultFeedback2
uint8 oil
uint32 mileage
bool lighting_b
bool horn_b
bool leftLamp_b
bool rightLamp_b
bool bothLamp_b
uint8 hydraulic_oil_temperature
uint16 oil_pressure
uint8 engine_water_cooling
"""
  __slots__ = ['driverMode_b','gearP_b','loadBreak_b','turtle_b','takeover_b','gear','wheelAngle','velocity','rpm','vechleId','engineSpeed','batteryVoltage','faultTotal','dump_bed','loading','faultCode','elecControlTemp','faultFeedback2','oil','mileage','lighting_b','horn_b','leftLamp_b','rightLamp_b','bothLamp_b','hydraulic_oil_temperature','oil_pressure','engine_water_cooling']
  _slot_types = ['bool','bool','bool','bool','bool','int8','int16','uint16','uint16','uint8','uint16','uint16','uint8','uint8','uint8','uint8','int8','uint8','uint8','uint32','bool','bool','bool','bool','bool','uint8','uint16','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       driverMode_b,gearP_b,loadBreak_b,turtle_b,takeover_b,gear,wheelAngle,velocity,rpm,vechleId,engineSpeed,batteryVoltage,faultTotal,dump_bed,loading,faultCode,elecControlTemp,faultFeedback2,oil,mileage,lighting_b,horn_b,leftLamp_b,rightLamp_b,bothLamp_b,hydraulic_oil_temperature,oil_pressure,engine_water_cooling

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ctr_can_930E, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.driverMode_b is None:
        self.driverMode_b = False
      if self.gearP_b is None:
        self.gearP_b = False
      if self.loadBreak_b is None:
        self.loadBreak_b = False
      if self.turtle_b is None:
        self.turtle_b = False
      if self.takeover_b is None:
        self.takeover_b = False
      if self.gear is None:
        self.gear = 0
      if self.wheelAngle is None:
        self.wheelAngle = 0
      if self.velocity is None:
        self.velocity = 0
      if self.rpm is None:
        self.rpm = 0
      if self.vechleId is None:
        self.vechleId = 0
      if self.engineSpeed is None:
        self.engineSpeed = 0
      if self.batteryVoltage is None:
        self.batteryVoltage = 0
      if self.faultTotal is None:
        self.faultTotal = 0
      if self.dump_bed is None:
        self.dump_bed = 0
      if self.loading is None:
        self.loading = 0
      if self.faultCode is None:
        self.faultCode = 0
      if self.elecControlTemp is None:
        self.elecControlTemp = 0
      if self.faultFeedback2 is None:
        self.faultFeedback2 = 0
      if self.oil is None:
        self.oil = 0
      if self.mileage is None:
        self.mileage = 0
      if self.lighting_b is None:
        self.lighting_b = False
      if self.horn_b is None:
        self.horn_b = False
      if self.leftLamp_b is None:
        self.leftLamp_b = False
      if self.rightLamp_b is None:
        self.rightLamp_b = False
      if self.bothLamp_b is None:
        self.bothLamp_b = False
      if self.hydraulic_oil_temperature is None:
        self.hydraulic_oil_temperature = 0
      if self.oil_pressure is None:
        self.oil_pressure = 0
      if self.engine_water_cooling is None:
        self.engine_water_cooling = 0
    else:
      self.driverMode_b = False
      self.gearP_b = False
      self.loadBreak_b = False
      self.turtle_b = False
      self.takeover_b = False
      self.gear = 0
      self.wheelAngle = 0
      self.velocity = 0
      self.rpm = 0
      self.vechleId = 0
      self.engineSpeed = 0
      self.batteryVoltage = 0
      self.faultTotal = 0
      self.dump_bed = 0
      self.loading = 0
      self.faultCode = 0
      self.elecControlTemp = 0
      self.faultFeedback2 = 0
      self.oil = 0
      self.mileage = 0
      self.lighting_b = False
      self.horn_b = False
      self.leftLamp_b = False
      self.rightLamp_b = False
      self.bothLamp_b = False
      self.hydraulic_oil_temperature = 0
      self.oil_pressure = 0
      self.engine_water_cooling = 0

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
      buff.write(_get_struct_5Bbh2HB2H4Bb2BI6BHB().pack(_x.driverMode_b, _x.gearP_b, _x.loadBreak_b, _x.turtle_b, _x.takeover_b, _x.gear, _x.wheelAngle, _x.velocity, _x.rpm, _x.vechleId, _x.engineSpeed, _x.batteryVoltage, _x.faultTotal, _x.dump_bed, _x.loading, _x.faultCode, _x.elecControlTemp, _x.faultFeedback2, _x.oil, _x.mileage, _x.lighting_b, _x.horn_b, _x.leftLamp_b, _x.rightLamp_b, _x.bothLamp_b, _x.hydraulic_oil_temperature, _x.oil_pressure, _x.engine_water_cooling))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 37
      (_x.driverMode_b, _x.gearP_b, _x.loadBreak_b, _x.turtle_b, _x.takeover_b, _x.gear, _x.wheelAngle, _x.velocity, _x.rpm, _x.vechleId, _x.engineSpeed, _x.batteryVoltage, _x.faultTotal, _x.dump_bed, _x.loading, _x.faultCode, _x.elecControlTemp, _x.faultFeedback2, _x.oil, _x.mileage, _x.lighting_b, _x.horn_b, _x.leftLamp_b, _x.rightLamp_b, _x.bothLamp_b, _x.hydraulic_oil_temperature, _x.oil_pressure, _x.engine_water_cooling,) = _get_struct_5Bbh2HB2H4Bb2BI6BHB().unpack(str[start:end])
      self.driverMode_b = bool(self.driverMode_b)
      self.gearP_b = bool(self.gearP_b)
      self.loadBreak_b = bool(self.loadBreak_b)
      self.turtle_b = bool(self.turtle_b)
      self.takeover_b = bool(self.takeover_b)
      self.lighting_b = bool(self.lighting_b)
      self.horn_b = bool(self.horn_b)
      self.leftLamp_b = bool(self.leftLamp_b)
      self.rightLamp_b = bool(self.rightLamp_b)
      self.bothLamp_b = bool(self.bothLamp_b)
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
      buff.write(_get_struct_5Bbh2HB2H4Bb2BI6BHB().pack(_x.driverMode_b, _x.gearP_b, _x.loadBreak_b, _x.turtle_b, _x.takeover_b, _x.gear, _x.wheelAngle, _x.velocity, _x.rpm, _x.vechleId, _x.engineSpeed, _x.batteryVoltage, _x.faultTotal, _x.dump_bed, _x.loading, _x.faultCode, _x.elecControlTemp, _x.faultFeedback2, _x.oil, _x.mileage, _x.lighting_b, _x.horn_b, _x.leftLamp_b, _x.rightLamp_b, _x.bothLamp_b, _x.hydraulic_oil_temperature, _x.oil_pressure, _x.engine_water_cooling))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 37
      (_x.driverMode_b, _x.gearP_b, _x.loadBreak_b, _x.turtle_b, _x.takeover_b, _x.gear, _x.wheelAngle, _x.velocity, _x.rpm, _x.vechleId, _x.engineSpeed, _x.batteryVoltage, _x.faultTotal, _x.dump_bed, _x.loading, _x.faultCode, _x.elecControlTemp, _x.faultFeedback2, _x.oil, _x.mileage, _x.lighting_b, _x.horn_b, _x.leftLamp_b, _x.rightLamp_b, _x.bothLamp_b, _x.hydraulic_oil_temperature, _x.oil_pressure, _x.engine_water_cooling,) = _get_struct_5Bbh2HB2H4Bb2BI6BHB().unpack(str[start:end])
      self.driverMode_b = bool(self.driverMode_b)
      self.gearP_b = bool(self.gearP_b)
      self.loadBreak_b = bool(self.loadBreak_b)
      self.turtle_b = bool(self.turtle_b)
      self.takeover_b = bool(self.takeover_b)
      self.lighting_b = bool(self.lighting_b)
      self.horn_b = bool(self.horn_b)
      self.leftLamp_b = bool(self.leftLamp_b)
      self.rightLamp_b = bool(self.rightLamp_b)
      self.bothLamp_b = bool(self.bothLamp_b)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_5Bbh2HB2H4Bb2BI6BHB = None
def _get_struct_5Bbh2HB2H4Bb2BI6BHB():
    global _struct_5Bbh2HB2H4Bb2BI6BHB
    if _struct_5Bbh2HB2H4Bb2BI6BHB is None:
        _struct_5Bbh2HB2H4Bb2BI6BHB = struct.Struct("<5Bbh2HB2H4Bb2BI6BHB")
    return _struct_5Bbh2HB2H4Bb2BI6BHB
