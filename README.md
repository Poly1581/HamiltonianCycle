Attempt to find a Hamiltonian cycle efficiently through depth first search.
Since a Hamiltonian cycle is a cycle, we can start with any vertex.
Graphs will be represented by their adjacency matrix.
Initialize a list of visited vertices (boolean array).
Iterate through per edge of current vertex and push modified matrix to a queue.
If we have visited the vertex, delete the edge and ignore it (do not push to matrix).
If the visited vertex is the starting vertex, we have found the cycle.
While the queue is not empty, pull the top one and do the same.
