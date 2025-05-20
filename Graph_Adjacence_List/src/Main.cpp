#include <iostream>
#include "directed_Graph.h"
#include "Undirected_Graph.h"
#include "vertex.h"

using namespace std;

int main(){

    UndirectedGraph g;

    g.addVertex("A");
    g.addVertex("B");
    g.addVertex("C");


    try {
        g.addEdge("A", "B", 3.5);
        g.addEdge("A", "C");
        //g.removeEdge("C", "B");
        g.getNeighbors("A");
        g.print();

    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }



    return 0;
}