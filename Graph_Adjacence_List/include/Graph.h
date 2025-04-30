#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <unordered_map>
#include "Vertex.h"

using namespace std;

class Graph {
    private:
        vector<vector<int>> adjList;                      
        vector<Vertex> vertices;                               
        unordered_map<string, int> labelToIndex;    // converte label em indice para add na adjList

    public:
        Graph();

        int addVertex(const string& label, double heuristicWeight);
        int addVertex(const string& label);
        // void addEdge(const string& from, const string& to);
        // void removeVertex(const string& label);
        void print() const;

};

#endif