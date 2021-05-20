#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
struct Root{
    char text[50];
    int id;
    struct Root *children[4];
    int size_of_children;
};

struct Root *create_node(char *txt, int si, int id1, struct Root**);
void Del_graph(struct Root* node);

#endif
