#include <iostream>
#include "Graph.h"
#include "Vertex.h"

using namespace std;

int main(){

    Graph g;

    g.addVertex("A");
    g.addVertex("B");
    g.addVertex("C");

    g.print();

    return 0;
}