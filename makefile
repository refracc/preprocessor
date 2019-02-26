clean:
		del *.asm
		del *.exe
		del *.obj
		del *.o
ppc: clean
		cl preprocess.c
preprocess: clean
		cl preprocess.c
push:
		git push -u origin master
