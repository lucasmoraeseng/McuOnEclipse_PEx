%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ReadData)
%;**     Description :
%;**         Read the broadband/full and infrared data
%include Common\GeneralParameters.inc(27)
%;**       * broadband%Parbroadband %>27 - Pointer to where to store the
%;** %>29 data
%;**       * ir%Parir %>27 - Pointer to store the infrared value
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine