#define GRAPH_INTERNAL_ACCESS

#include "Graph.h"
#include "Vertex.h"

#include <iostream>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

Graph::Graph(){}

int Graph::addVertex(const string& label, double heuristicWeight){
    if(labelToIndex.count(label)){
        return labelToIndex[label];
    }

    int index = vertices.size();

    Vertex v(label, heuristicWeight);
    vertices.push_back(v);
    labelToIndex[label] = index;
    adjList.emplace_back();

    return index;
}


void Graph::print() const {
    for(int i = 0; i < adjList.size(); i++){
        cout << vertices[i].label << ": ";
        for(int j = 0; j < adjList[i].size(); j++ ){
            cout << vertices[adjList[i][j]].label << " ";
        }
        cout << "\n";
    }
}