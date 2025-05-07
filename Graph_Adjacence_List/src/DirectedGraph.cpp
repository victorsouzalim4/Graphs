#include "DirectedGraph.h"

#include <string>
#include <iostream>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>
#include "Edge.h"
#include <algorithm>

using namespace std;

void DirectedGraph::addEdge(const string& from, const string& to, double weight) {
    if (!labelToIndex.count(from)) {
        throw invalid_argument("Origin vertex'" + from + "' does not exists.");
    }
    if (!labelToIndex.count(to)) {
        throw invalid_argument("Destiny vertex '" + to + "' does not exists.");
    }

    int indexFrom = labelToIndex[from];
    int indexTo = labelToIndex[to];
    Edge e(indexTo, weight);

    adjList[indexFrom].push_back(e);

}

void DirectedGraph::removeEdge(const string& originLabel, const string& destinyLabel){
    if(!labelToIndex.count(originLabel) || !labelToIndex.count(destinyLabel)){
        throw invalid_argument("Vertex does not exists.");
    }

    int originIndex = labelToIndex[originLabel];
    int destinyIndex = labelToIndex[destinyLabel];

    vector<Edge>& e = adjList[originIndex];

    e.erase(
        remove_if(e.begin(), e.end(),
            [destinyIndex](const Edge& e) { return e.to == destinyIndex; }),
        e.end());
}
