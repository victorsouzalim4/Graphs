#include "Edge.h"

Edge::Edge(int to, double weight) : to(to), weight(weight) {}

void Edge::print() const{
    cout << "(" << to << " ," << weight << "); ";
}