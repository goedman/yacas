
call msdev compressor.dsp /MAKE "compressor - Win32 Release" 

call release\compressor.exe - ..\scripts\ scripts.dat
call cl win32rcwriter.cpp
call win32rcwriter.exe
copy scripts.rc ..\src\
cd ..\src
pause
call msdev yacasdll.dsp /MAKE "yacasdll - Win32 Release" 
call msdev yacas.dsp /MAKE "yacas - Win32 Release" 
pause

