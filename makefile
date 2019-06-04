all: 
		flex scanner.l
		yacc -d parser.y
		gcc -o parser lex.yy.c y.tab.c -ll
