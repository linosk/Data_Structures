#include "graph.h"

typedef struct Graph{
    int** Edges;
    int Nodes;
}Graph;

Graph* create_graph(int Number_of_nodes)
{
    Graph* GRPH = malloc(sizeof(Graph));
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    //need to add assert/if in every function does uses malloc to check wherher any pointer did not allocate - points to NULL
    GRPH->Nodes = Number_of_nodes;
    GRPH->Edges = malloc(GRPH->Nodes*sizeof(int*));
    for(int i=0;i<GRPH->Nodes;i++)
    {
        GRPH->Edges[i] = malloc(GRPH->Nodes*sizeof(int));
    }

    return GRPH;
}

void declare_graph_structure(Graph* GRPH)
{
    int Is_connected = -1;
    assert(GRPH!=NULL);
    for(int i=0;i<GRPH->Nodes;i++)
    {
        for(int j=0;j<GRPH->Nodes;j++)
        {
            if(i==j)
                GRPH->Edges[i][j] = 0;
            else
            {
                fprintf(stdout,"Is node %d connected to node %d (0 means no connection, 1 means connection)?\n",i,j);
                while(Is_connected!=0&&Is_connected!=1)
                    scanf("%d",&Is_connected);
                GRPH->Edges[i][j] = Is_connected;
                Is_connected = -1;
            }
        }
    }
}

void print_graph_values(Graph* GRPH)
{
    for(int i=0;i<GRPH->Nodes;i++)
    {
        fprintf(stdout,"[ ");
        for(int j=0;j<GRPH->Nodes;j++)
        {
            fprintf(stdout,"%d ",GRPH->Edges[i][j]);
        }
        fprintf(stdout,"]\n");
    }
}

void __dfs(Graph* GRPH, int Node)
{
    Stack* STCK = initilize_stack(GRPH->Nodes);
    for(int i=Node;i<GRPH->Nodes;i++)
    {
        
    }
    destroy_stack(STCK);
}

void dfs(Graph* GRPH)
{
    __dfs(GRPH,0);
}

void destroy_graph(Graph* GRPH)
{
    for(int i=0;i<GRPH->Nodes;i++)
    {
        free(GRPH->Edges[i]);
    }
    free(GRPH->Edges);
    free(GRPH);
}