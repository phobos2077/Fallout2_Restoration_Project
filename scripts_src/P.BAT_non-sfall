@echo off
@if not exist %1.ssl goto DONE

@copy %1.ssl temp.c

@rem Watcom 11 users uncomment the following line:
@rem wcc386 temp.c /pc /fo=temp.i /w4

@rem Microsoft Visual Studio 6 users uncomment the following line:
@rem cl /P temp.c

@copy temp.i temp.ssl 

@..\dos4gw ..\compile temp.ssl
@if %errorlevel% neq 0 goto ERROR

@rem The path in the following two lines should point to the Fallout 2 folder:
@md ..\..\..\data\scripts
@copy temp.int ..\..\..\data\scripts\%1.int

@del temp.c
@del temp.i
@del temp.ssl
@del temp.int
@goto DONE

:ERROR
@echo ERROR: %_CWDS%%1.ssl >> ..\err.log

:DONE