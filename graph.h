#ifndef __GRAPH_H__
#define __GRAPH_H__

//Graph represent via adjacency matrix

#include <stdlib.h>

#include <stdio.h>

#include <assert.h>

typedef struct Graph Graph;

Graph* create_graph(int Number_of_nodes);

void declare_graph_structure(Graph* GRPH);

void print_graph_values(Graph* GRPH);

void destroy_graph(Graph* GRPH);

#endif