makefile:
	echo r | pdflatex *.tex > 1.log
	rm *.log *.aux
	git add * > git.log
	git commit -m "update" > git.log 
	git push  > git.log
	rm git.log
