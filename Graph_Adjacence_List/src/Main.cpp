#include <iostream>
#include "UndirectedGraph.h"
#include "Vertex.h"

using namespace std;

int main(){

    UndirectedGraph g;

    g.addVertex("A");
    g.addVertex("B");
    g.addVertex("C");

    g.print();

    return 0;
}