#ifndef __GRAPH_H__
#define __GRAPH_H__


#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <assert.h>

#include "stack.h"

#include "queue.h"

typedef struct Graph Graph;

/*
Graph represent via adjacency matrix
*/
Graph* create_graph(int Number_of_nodes);

/*
At this moment node can point to itself
*/
void declare_graph_structure(Graph* GRPH);

/*
This function will declare graph structure according to correctly defined input file

Input file requirements:
- must me named "structure.txt"
- first line of it must consist of integer number equal to passed arguments in create_graph()
- every other line must start with the number of perticular node and then be followed by numbers of nodes that current node is pointing to,
e.g. for the 1st node connected to 2nd and 5th nodes the line should look like:
1 2 5
- the nodes should be numerated in the ascending order stating with node 0
*/
void declare_graph_structure_from_file(Graph* GRPH);

/*
As always issues with printing matrix values.
*/
void print_graph_values(Graph* GRPH);

/*
99% sure that it works correctly so check once again later.
*/
void __dfs(Graph* GRPH, int Current_node, Stack* STCK, Stack* Order, int* Visited);

void dfs(Graph* GRPH);

void __bfs(Graph* GRPH, int Currnet_node, Queue* Q, Queue* Order, int* Visited);

void bfs(Graph* GRPH);

void destroy_graph(Graph* GRPH);

#endif