#ifndef __GRAPH_H__
#define __GRAPH_H__


#include <stdlib.h>

#include <stdio.h>

#include <assert.h>

#include "stack.h"

typedef struct Graph Graph;

/*
Graph represent via adjacency matrix
*/
Graph* create_graph(int Number_of_nodes);

/*
At this moment node cannot point to itslef
*/
void declare_graph_structure(Graph* GRPH);

void print_graph_values(Graph* GRPH);

void __dfs(Graph* GRPH, int Node);

void dfs(Graph* GRPH);

void destroy_graph(Graph* GRPH);

#endif