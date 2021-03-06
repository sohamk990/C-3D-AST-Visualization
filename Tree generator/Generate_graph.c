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


//Assign Values
void dfs(struct Root* node, int *x)
{
    node->id=(*x);
    (*x)++;
    for(int i=0;i<node->size_of_children;i++)
    {
      dfs(node->children[i], x);
    }
}


//children
void dfs1(struct Root* node, FILE *fp)
{
    fseek(fp, 0, SEEK_END);
    fprintf(fp, "%d,", node->size_of_children);
    for(int i=0;i<(node->size_of_children);i++)
    {
        fseek(fp, 0, SEEK_END);
        fprintf(fp, "%d,", node->children[i]->id);
    }
    fseek(fp, 0, SEEK_END);
    for(int i=0;i<(node->size_of_children);i++)
    {
      dfs1(node->children[i], fp);
    }
}

//string values
void dfs2(struct Root *node, FILE* fp)
{
    fseek(fp, 0, SEEK_END);
    fprintf(fp, " \'%s\',", node->text);
    for(int i=0;i<node->size_of_children;i++)
    {
      dfs2(node->children[i], fp);
    }
}

int main(void)
{
    FILE *fp=fopen("./hello.txt", "r");
    
    yyin=fp;
    yyparse();
    
    int *x=(int *)(malloc(sizeof(int)));
    (*x)=0;

    dfs(mtree, x);
    int n=(*x);
    
    fp=fopen("output.txt", "w+");
    fseek(fp, 0, SEEK_SET);
    fprintf(fp, "%d,", n);
    dfs1(mtree, fp);
    fprintf(fp, "\n");
    dfs2(mtree, fp);
} 