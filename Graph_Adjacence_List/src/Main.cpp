#include <iostream>
#include "DirectedGraph.h"
#include "Vertex.h"

using namespace std;

int main(){

    DirectedGraph g;

    g.addVertex("A");
    g.addVertex("B");
    g.addVertex("C");


    try {
        g.addEdge("A", "B", 3.5);
        g.addEdge("A", "C");
        g.print();
        g.removeEdge("A", "B");
        g.print();

    } catch (const invalid_argument& e) {
        cout << "Erro ao adicionar aresta: " << e.what() << endl;
    }



    return 0;
}