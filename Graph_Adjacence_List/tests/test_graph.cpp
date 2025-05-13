#include <gtest/gtest.h>
#include "Directed_Graph.h"

TEST(GraphTest, RemoveVertex_DoesNotThrowInitially) {
    DirectedGraph g;
    g.addVertex("A");
    g.addVertex("B");
    g.addEdge("A", "B", 5);

    // Deve remover "B" sem lançar exceção
    ASSERT_NO_THROW(g.removeVertex("B"));
}

TEST(GraphTest, RemoveVertex_ThrowsWhenAlreadyRemoved) {
    DirectedGraph g;
    g.addVertex("A");
    g.addVertex("B");
    g.addEdge("A", "B", 5);

    g.removeVertex("B");

    // Segunda remoção deve lançar exceção
    EXPECT_THROW(g.removeVertex("B"), std::invalid_argument);
}

TEST(GraphTest, RemoveVertex_RemovesOutgoingEdges) {
    DirectedGraph g;
    g.addVertex("A");
    g.addVertex("B");
    g.addEdge("A", "B", 5);

    g.removeVertex("B");

    auto vizinhos = g.getNeighbors("A");
    EXPECT_TRUE(vizinhos.empty());
}
