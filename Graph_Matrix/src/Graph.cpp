#include <vector>
#include <iostream>
#include "Graph.h"
using namespace std;

        Graph::Graph() : G(3, vector<int>(3)){}
        Graph::Graph(int numberOfVertices) : G(numberOfVertices, vector<int>(numberOfVertices)){};

        void Graph::includeEdge(int u, int v){
            G[u][v] = 1;        //undirected graph
            G[v][u] = 1;
        }

        void Graph::print(){
            for(int i = 0; i < G.size(); i++ ){
                for(int j = 0; j < G[0].size(); j++){
                    cout << G[i][j] << " ";
                }
                cout << "\n";
            }
        }


