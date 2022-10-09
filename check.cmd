mkdir tmp
bin\scpp.exe scpp/main.c tmp/scpp.i
bin\scpp.exe scc/main.c tmp/scc.i
bin\scpp.exe bcode/main.c tmp/bcode.i
bin\scpp.exe asm/main.c tmp/asm.i
bin\scc.exe tmp/scpp.i tmp/scpp.bcode
bin\scc.exe tmp/scc.i tmp/scc.bcode
bin\scc.exe tmp/bcode.i tmp/bcode.bcode
bin\scc.exe tmp/asm.i tmp/asm.bcode
bin\bcode.exe tmp/scpp.bcode tmp/scpp.asm
bin\bcode.exe tmp/scc.bcode tmp/scc.asm
bin\bcode.exe tmp/bcode.bcode tmp/bcode.asm
bin\bcode.exe tmp/asm.bcode tmp/asm.asm
bin\asm.exe tmp/scpp.asm tmp/scpp.exe
bin\asm.exe tmp/scc.asm tmp/scc.exe
bin\asm.exe tmp/bcode.asm tmp/bcode.exe
bin\asm.exe tmp/asm.asm tmp/asm.exe
comp /M bin\scpp.exe tmp\scpp.exe
comp /M bin\scc.exe tmp\scc.exe
comp /M bin\bcode.exe tmp\bcode.exe
comp /M bin\asm.exe tmp\asm.exe
pause
