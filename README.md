# Tesis

## Linux
```bash
latexmk -pdf -interaction=nonstopmode -bibtex tesina.tex
```
## Mac
```bash
pdflatex -interaction=nonstopmode tesina.tex
bibtex tesina
pdflatex -interaction=nonstopmode tesina.tex
pdflatex -interaction=nonstopmode tesina.tex
```
