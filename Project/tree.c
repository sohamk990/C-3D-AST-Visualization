#include "tree.h"
#include <string.h>
struct Root* create_node(char *txt, int si, int id1, struct Root **list)
{
    struct Root* ans=(struct Root*)(malloc(sizeof(struct Root)));
    strcpy(ans->text, txt);
    ans->size_of_children=si;
    ans->id=id1;
    for(int i=0;i<ans->size_of_children;i++)
    {
        ans->children[i]=list[i];
    }
    return ans;
}
void Del_graph(struct Root* node)
{
    for(int i;i<node->size_of_children;i++)
    {
        Del_graph(node->children[i]);
    }
    free(node);
}