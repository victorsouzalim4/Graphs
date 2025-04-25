#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <iostream>
using namespace std;

class Graph {
    private:
        vector<vector<int>> G;
    
    public:
        Graph();
        Graph(int numberOfVertices);

        void print();

};

#endif