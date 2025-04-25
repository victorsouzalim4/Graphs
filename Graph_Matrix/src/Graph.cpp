#include <vector>
#include <iostream>
using namespace std;

class Graph{
    vector<vector<int>> G;

    public:

        Graph() : G(3, vector<int>(3)){
            
        }

        void Print(){
            for(int i = 0; i < G.size(); i++ ){
                for(int j = 0; j < G[0].size(); j++){
                    cout << G[i][j];
                }
            }
        }


};