all: Generate

y.tab.h: check_parse.y
	yacc -d check_parse.y
y.tab.c: check_parse.y
	yacc -d check_parse.y
lex.yy.c: y.tab.h y.tab.c
	lex check_lexer.l
Generate: control.c y.tab.c y.tab.h tree.c tree.h y.tab.c y.tab.h lex.yy.c graph_parse.y graph_lexer.l
	gcc control.c y.tab.c lex.yy.c tree.c -o Generate

clean:
	rm Generate y.tab.c y.tab.h lex.yy.c
