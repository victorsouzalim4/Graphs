#include <iostream>
#include "Graph.h"
#include "Vertex.h"
using namespace std;

int main(){

    Vertex* v = new Vertex("A");

    cout << v->label;

    return 0;
}