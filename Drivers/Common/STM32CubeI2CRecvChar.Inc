%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (RecvChar)
%;**     Description :
%;**         When working as a MASTER, this method writes 7 bits of slave
%;**         address plus R/W bit = 1 to the I2C bus and then reads one
%;**         character (byte) from the bus. The slave address must be
%;**         specified before by the "SelectSlave" method or in the
%;**         component initialization section of 'Slave address init'
%;**         property. When working as a SLAVE, this method reads one
%;**         character (byte) from the bus.
%include Common\GeneralParameters.inc(27)
%;**       * Chr%ParChr %>27 - Pointer to received character
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code, possible codes:
%;** %>29 ERR_OK - OK
%;** %>29 ERR_SPEED - This device does not work in
%;** %>29 the active speed mode
%;** %>29 ERR_BUSY - The slave device is busy, it
%;** %>29 does not respond by the acknowledgment
%;** %>29 (MASTER mode only)
%;** %>29 ERR_DISABLED - Device is disabled
%;** %>29 ERR_BUSOFF - Clock timeout elapsed (SLAVE
%;** %>29 mode only)
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine
