%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (PLMETestMode)
%;**     Description :
%;**         Executes a test mode
%include Common\GeneralParameters.inc(27)
%;**       * psPacket%ParpsPacket %>27 - Pointer to packet to use for
%;** %>29 tests.
%;**         u8mode%Paru8mode %>27 - Desired test mode
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine