#include <tuple>
#include "graph.h"
#include <iostream>

using namespace std;

int main() {
	graph K4(4);
	K4.addEdge(0,1);
	K4.addEdge(0,2);
	K4.addEdge(0,3);
	K4.addEdge(1,2);
	K4.addEdge(1,3);
	K4.addEdge(2,3);
}
