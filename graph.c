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
        memset(GRPH->Edges[i],0,GRPH->Nodes*sizeof(int));
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
            //if(i==j)
            //    GRPH->Edges[i][j] = 0;
            //else
            //{
                fprintf(stdout,"Is node %d connected to node %d (0 means no connection, 1 means connection)?\n",i,j);
                while(Is_connected!=0&&Is_connected!=1)
                    scanf("%d",&Is_connected);
                GRPH->Edges[i][j] = Is_connected;
                Is_connected = -1;
            //}
        }
    }
}

void declare_graph_structure_from_file(Graph* GRPH)
{
    FILE* File = fopen("structure.txt","r");
    assert(File!=NULL);

    int Fseek_end_check = fseek(File,0,SEEK_END);
    assert(Fseek_end_check==0);

    int File_size = ftell(File);

    int Fseek_beg_check = fseek(File,0,SEEK_SET);
    assert(Fseek_beg_check==0);

    char* File_content = malloc(File_size*sizeof(char));

    int Fread_check = fread(File_content,1,File_size*sizeof(char),File);
    assert(Fread_check!=1);

    //Find another way later to make this offest
    const int Convertion_correction_offest = 48;

    //Replace asserts with ifs later
    assert((int)File_content[0]-Convertion_correction_offest==GRPH->Nodes);

    int Counter = 0;
    int Current_node = -1;
    int Connets_to = -1;
    int Index = -1;
    int Index_check = -1;

    while (Counter!=File_size)
    {
        if(File_content[Counter]=='\n')
        {
            Index = Counter+1;
            Current_node = (int)File_content[Counter+1]-Convertion_correction_offest;
        }
        if(Current_node>=0&&File_content[Counter]!='\n'&&File_content[Counter]!=' ')
        {
            Index_check = Counter;
            if(Index!=Index_check)
            {
                Connets_to = (int)File_content[Counter]-Convertion_correction_offest;
                GRPH->Edges[Current_node][Connets_to] = 1;
            }
        }
        Counter++;
    }    

    free(File_content);
    fclose(File);
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

void __dfs(Graph* GRPH, int Current_node, Stack* STCK, Stack* Order, int* Visited)
{
    if(Visited[Current_node]==1)
    {
        return;
    }
    if(Visited[Current_node]==0)
    {
        Visited[Current_node]=1;
        push_stack(Order,Current_node);
    }
    for(int i=GRPH->Nodes-1;i>=0;i--)
    {
        if(GRPH->Edges[Current_node][i]==1&&Visited[i]==0)
        {
            push_stack(STCK,i);
        }
    }
    int Next_node = get_last_value_stack(STCK);
    if(Next_node==-1)
        Next_node=Current_node+1;
    pop_stack(STCK);
    __dfs(GRPH,Next_node,STCK,Order,Visited);
}

void dfs(Graph* GRPH)
{
    Stack* STCK = initilize_stack(GRPH->Nodes);
    Stack* Order = initilize_stack(GRPH->Nodes);
    int* Visited = malloc(GRPH->Nodes*sizeof(int));
    memset(Visited,0,GRPH->Nodes*sizeof(int));
    __dfs(GRPH,0,STCK,Order,Visited);
    print_stack(STCK);
    print_stack(Order);
    destroy_stack(STCK);
    destroy_stack(Order);
    free(Visited);
}

void __bfs(Graph* GRPH, int Current_node, Queue* Q, Queue* Order, int* Visited)
{
    if(Visited[Current_node]==1)
    {
        return;
    }
    if(Visited[Current_node]==0)
    {
        Visited[Current_node]=1;
        push_queue(Order,Current_node);
    }
    for(int i=0;i<GRPH->Nodes;i++)
    {
        if(GRPH->Edges[Current_node][i]==1&&Visited[i]==0)
        {
            push_queue(Q,i);
        }
    }
    int Next_node = get_first_value_queue(Q);
    if(Next_node==-1)
        Next_node=Current_node+1;
    pop_queue(Q);
    __bfs(GRPH,Next_node,Q,Order,Visited);
}

void bfs(Graph* GRPH)
{
    Queue* Q = initilize_queue(GRPH->Nodes);
    Queue* Order = initilize_queue(GRPH->Nodes);
    int* Visited = malloc(GRPH->Nodes*sizeof(int));
    memset(Visited,0,GRPH->Nodes*sizeof(int));
    __bfs(GRPH,0,Q,Order,Visited);
    print_queue(Q);
    print_queue(Order);
    destroy_queue(Q);
    destroy_queue(Order);
    free(Visited);
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