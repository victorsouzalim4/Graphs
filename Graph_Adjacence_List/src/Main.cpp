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
        g.addEdge("A", "B");
        g.addEdge("A", "C");
        g.addEdge("A", "F");
    } catch (const invalid_argument& e) {
        cout << "Erro ao adicionar aresta: " << e.what() << endl;
    }

    g.print();

    return 0;
}