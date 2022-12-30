#include "graph.h"

int main(int argc, char** argv)
{
    Graph* ne = create_graph(4);

    declare_graph_structure_from_file(ne);

    //declare_graph_structure(ne);

    print_graph_values(ne);

    dfs(ne);
    fprintf(stdout,"-----------------\n");
    bfs(ne);

    destroy_graph(ne);

    return 0;
}