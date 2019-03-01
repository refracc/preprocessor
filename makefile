clean:
	del *.asm
	del *.exe
	del *.obj
	del *.o
math: ppc
	preprocess -i math_functions.c
math_c: ppc
	preprocess -i math_functions.c -c
string: ppc
	preprocess -i string_functions.c
string_c: ppc
	preprocess -i string_functions.c -c
ppc: clean
	cl preprocess.c
preprocess: clean
	cl preprocess.c
push:
	git add *
	git commit -m "Backup (LATEST)"
	git push -u origin master
	cls
