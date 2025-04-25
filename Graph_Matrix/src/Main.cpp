#include <iostream>
#include "Graph.h"
using namespace std;

int main(){
    Graph* g = new Graph(5);

    g->includeEdge(0, 3);
    g->removeEdge(0,3);
    g->print();

    return 0;
}