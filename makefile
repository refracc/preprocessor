clean:
		del *.asm
		del *.exe
		del *.obj
		del *.o
ppc: clean
		cl preprocess.c
		notepad H:\Coursework\README.txt
preprocess: clean
		cl preprocess.c
push:
		git push -u origin master
