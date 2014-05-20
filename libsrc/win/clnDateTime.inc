 ! Include for clnDateTime class
 OMIT('_EndOfInclude', _clnDatTimePresent_)
_clnDateTimePresent_ EQUATE(1)

!-----------------------------------------------------------------------
! Miscellaneous definitions required by class
!-----------------------------------------------------------------------
                     
!-----------------------------------------------------------------------
! Equates needed by class
!-----------------------------------------------------------------------
                    
!-----------------------------------------------------------------------
! Class specification
!-----------------------------------------------------------------------
clnDateTime   CLASS,MODULE('clnDateTime.clw'),TYPE,LINK('clnDateTime.clw',_ABCLinkMode_),DLL(_ABCDllMode_)

              END
_EndOfInclude_