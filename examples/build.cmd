mkdir tmp
..\bin\scpp.exe example1/example1.c tmp/example1.i
..\bin\scc.exe tmp/example1.i tmp/example1.bcode
..\bin\bcode.exe tmp/example1.bcode tmp/example1.asm
..\bin\asm.exe tmp/example1.asm example1.exe
..\bin\scpp.exe example2/example2.c tmp/example2.i
..\bin\scc.exe tmp/example2.i tmp/example2.bcode
..\bin\bcode.exe tmp/example2.bcode tmp/example2.asm
..\bin\asm.exe tmp/example2.asm example2.exe
