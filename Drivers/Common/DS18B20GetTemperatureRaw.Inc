%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetTemperatureRaw)
%;**     Description :
%;**         Gets the temperature from memory in raw 32bit format
%include Common\GeneralParameters.inc(27)
%;**         sensor_index%Parsensor_index %>27 - Sensor index, use zero
%;** %>29 if only using one sensor
%;**       * raw%Parraw %>27 - Pointer to where to store the value
%;**     Returns     :
%;**         ---%RetVal %>27 - error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine