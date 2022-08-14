- Graph - it is a data structure which has two components that are edges and vertices(node).
- There are two types of graphs
(i) Directed graphs -> in this edges have the direction.
(ii) Undirected graphs -> in this edges don't have the direction.

# Degree of the graph
- There are two types of degree in the graph the first on the in-degree that means the no of edges coming to that node and the out-degree is no of edges that is going out of that node. we only calculate the degree in the directed graphs.
- there is a property for the undirected graph that the degree of the undirected graph is 2 * no of edges.

# Path in graph
- it is sequence of nodes of vertex such that none of the nodes are repeated or visited twice in that path.

# Weighted edges
- when the sum value is assigned to the edge then we say it is weighted edges graph.
- when the weightes aren't mention then you have to consider unit weight.

# Graph representation in C++
- There are many ways of storing the graphs.
(i) -> Adjacency matrix.
in this we first check the no of nodes. -> then we create a 2-D matric of node*node -> then we iterate over all the edges that is given to us. -> then we assign the value in that 2-D matrix as we found the edge between any two node. -> for code check Implementation of graph.