#include "Vertex.h"
#include <string>

Vertex::Vertex(string l) : label(l), heuristicWeight(0.0) {}
Vertex::Vertex(string l, double hw) : label(l), heuristicWeight(hw) {}
