//	Graphs will be represented through their adjacency matrix, and all graphs will be considered to be undirected
//	Such that adjMatrix[from][to] = adjMatrix[to][from] and adjMatrix[vertex] is the list of all vertices connected
//	to the given vertex.

#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

using namespace std;

class graph {
	private:
		int numV = 0;
		int numE = 0;
		vector<vector<bool>> adjMatrix;
	public:
		graph(int v, int e) {
			numV = v;
			numE = e;
			vector<vector<bool>> tempMat(numV, vector<bool> (numV, false));
			adjMatrix = tempMat;
		};

		bool hasVertex(int vertex) {
			return (vertex >= 0) && (vertex < numV);
		};
		
		bool validEdge(int from, int to) {
			return hasVertex(from) && hasVertex(to);
		};

		void addEdge(int from, int to) {
			if(!validEdge(from,to)) {
				return;
			}
			numE += !adjMatrix[from][to];
			adjMatrix[from][to] = true;
			adjMatrix[to][from] = true;
		};
		
		void removeEdge(int from, int to) {
			if(!validEdge(from,to)) {
				return;
			}
			numE -= adjMatrix[from][to];
			adjMatrix[from][to] = false;
			adjMatrix[to][from] = false;
		};

		bool hasEdge(int from, int to) {
			if(!validEdge(from,to)) {
				return false;
			}
			return adjMatrix[from][to];
		}

		vector<bool> neighbors(int vertex) {
			return adjMatrix[vertex];
		}
};

#endif
