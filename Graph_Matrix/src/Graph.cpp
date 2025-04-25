#include "Graph.h"

#include <iostream>
#include <vector>
using namespace std;

Graph::Graph() : G(3, vector<int>(3)) {}
Graph::Graph(int numberOfVertices)
    : G(numberOfVertices, vector<int>(numberOfVertices)) {};

void Graph::includeEdge(int u, int v) {
    try {
        G.at(u).at(v) = 1;  // undirected graph for now
        G.at(v).at(u) = 1;
    } catch (const std::exception& e) {
        cout << "ERROR: ";
        std::cerr << e.what() << '\n';
    }
}

void Graph::removeEdge(int u, int v) {
    try {
        G.at(u).at(v) = 0;
        G.at(v).at(u) = 0;
    } catch (const std::exception& e) {
        cout << "ERROR: ";
        std::cerr << e.what() << '\n';
    }
}

void Graph::print() {
    for (int i = 0; i < G.size(); i++) {
        for (int j = 0; j < G[0].size(); j++) {
            cout << G[i][j] << " ";
        }
        cout << "\n";
    }
}
