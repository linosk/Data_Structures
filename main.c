#include "graph.h"

int main(int argc, char** argv)
{

    Graph* ne = create_graph(3);

    declare_graph_structure(ne);

    print_graph_values(ne);

    destroy_graph(ne);

    return 0;
}