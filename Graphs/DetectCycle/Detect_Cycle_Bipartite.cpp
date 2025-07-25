#include <iostream>
#include <vector>
#include <map>
using namespace std;
enum color{WHITE, GRAY, BLACK};
/*
  WHITE = unvisited
  GRAY  = Its adjacent nodes are being visited
  BLACK = All its adjacent nodes are visited
*/
void addEdge(map<int, vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
}

bool isCycleUtil(map<int, vector<int>>& adj, int start, vector<int>& NodeColor) {
    NodeColor[start] = GRAY;

    for(auto x:adj[start]) {
        if(NodeColor[x] == GRAY)
            return true;
        if(NodeColor[x] == WHITE && isCycleUtil(adj, x, NodeColor))
            return true;
    }

    NodeColor[start] = BLACK;
    return false;
}

bool isCycle(map<int, vector<int>>& adj, int V) {
    vector<int> NodeColor(V, WHITE);

    for(int i = 0; i<V; i++){
        if(NodeColor[i] == WHITE && isCycleUtil(adj, i, NodeColor))
            return true;
    }
    return false;
}

int main() {
    int V = 4;
    map<int, vector<int>> adj;
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 0);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 3);

    if(isCycle(adj, V))
        cout << "There is a cycle";
    else
        cout << "No cycle";
    return 0;
}