clean:
		del *.asm
		del *.exe
		del *.obj
ppc: clean
		cl preprocess.c
preprocess: clean
		cl preprocess.c
push:
		git remote add origin https://github.com/refracc/set07109-c
		git push -u origin master
