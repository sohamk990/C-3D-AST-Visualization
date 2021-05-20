#include <stdio.h>
#include <stdlib.h> 
#include "tree.h"
#include "y.tab.h"
#include <errno.h>
extern FILE *yyin;
extern int yylex();
extern int yyparse();
struct Root *mtree;
int Parse_status=0;
void dfs(struct Root* node)
{
    printf("%s\n", node->text);
    if(node->size_of_children)
    {
        for(int i=0;i<(node->size_of_children);i++)
        {
            dfs(node->children[i]);
        }
    }
}
int main(void)
{
    FILE *fp=fopen("./hello.txt", "r");
  //dfs(mtree);
    yyin=fp;
    //struct Root *node=create_node("yo", 1, 9);
    //printf("%d\n", node->size_of_children);
  //  mtree=create_node("yo");
    if(yyparse())
    {
       // printf("Parse Unsuccessful");
    }
    else
    {
        yyin=fp;
        system("yacc -d graph_parse.y");
        system("lex graph_lexer.l");
        system("gcc Generate_graph.c y.tab.c lex.yy.c tree.c");
        system("./a.out");
    }
    //perror("error:")
    //printf("%s\n", mtree->text);
} 