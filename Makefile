all:
	[ -x bcode ]
	[ -x scc ]
	[ -x scpp ]
	[ -x include ]
	mkdir bin
	mkdir tmp
	gcc scpp/main.c -o tmp/scpp.gcc
	gcc scc/main.c -o tmp/scc.gcc -g
	gcc bcode/main.c -o tmp/bcode.gcc
	gcc asm/main.c -o tmp/asm.gcc -g
	tmp/scpp.gcc scpp/main.c tmp/scpp.i
	tmp/scpp.gcc scc/main.c tmp/scc.i
	tmp/scpp.gcc bcode/main.c tmp/bcode.i
	tmp/scpp.gcc asm/main.c tmp/asm.i
	tmp/scc.gcc tmp/scpp.i tmp/scpp.bcode
	tmp/scc.gcc tmp/scc.i tmp/scc.bcode
	tmp/scc.gcc tmp/bcode.i tmp/bcode.bcode
	tmp/scc.gcc tmp/asm.i tmp/asm.bcode
	tmp/bcode.gcc tmp/scpp.bcode tmp/scpp.asm
	tmp/bcode.gcc tmp/scc.bcode tmp/scc.asm
	tmp/bcode.gcc tmp/bcode.bcode tmp/bcode.asm
	tmp/bcode.gcc tmp/asm.bcode tmp/asm.asm
	tmp/asm.gcc tmp/scpp.asm bin/scpp.exe tmp/scpp.map
	tmp/asm.gcc tmp/scc.asm bin/scc.exe tmp/scc.map
	tmp/asm.gcc tmp/bcode.asm bin/bcode.exe tmp/bcode.map
	tmp/asm.gcc tmp/asm.asm bin/asm.exe tmp/asm.map
clean:
	[ -x bcode ]
	[ -x scc ]
	[ -x scpp ]
	[ -x include ]
	rm -rf bin tmp
