makefile:
	echo r | pdflatex *.tex > 1.log
	rm *.log *.aux
	git add *
	git commit -m "update"
	git push 
