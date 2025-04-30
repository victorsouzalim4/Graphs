#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
using namespace std;

class Graph {
   private:
    vector<vector<int>> G;

   public:
    Graph();
    Graph(int numberOfVertices);

    void includeEdge(int u, int v);
    void includeEdge(int u, int v, int w);
    void removeEdge(int u, int v);

    void print();
};

#endif