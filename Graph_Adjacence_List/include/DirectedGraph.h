#ifndef DIRECTED_GRAPH_H
#define DIRECTED_GRAPH_H
#define GRAPH_INTERNAL_ACCESS

#include "Graph.h"

class DirectedGraph : public Graph {
   public:
    void addEdge(const string& from, const string& to);
};

#endif