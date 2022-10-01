//Approach
/* Sort all the edges from low weight to high
Take the edge with the lowest weight and add it to the spanning tree. If adding the edge created a cycle, then reject this edge.
Keep adding edges until we reach all vertices.*/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define edge pair<int, int>

class Graph {
   private:
  vector<pair<int, edge> > G;  // graph
  vector<pair<int, edge> > T;  // minimum spanning tree
  int *parent;
  int V;  // number of nodes in graph
   public:
  Graph(int V);
  void Add_Edge(int u, int v, int w);
  int find_set(int i);
  void union_set(int u, int v);
  void kruskal();
  void print();
};
Graph::Graph(int V) {
  parent = new int[V];

  for (int i = 0; i < V; i++)
    parent[i] = i;

  G.clear();
  T.clear();
}
void Graph::Add_Edge(int u, int v, int w) {
  G.push_back(make_pair(w, edge(u, v)));
}
int Graph::find_set(int i) {
  if (i == parent[i])
    return i;
  else
    return find_set(parent[i]);
}

void Graph::union_set(int u, int v) {
  parent[u] = parent[v];
}
void Graph::kruskal() {
  int i, uRep, vRep;
  sort(G.begin(), G.end()); 
  for (i = 0; i < G.size(); i++) {
    uRep = find_set(G[i].second.first);
    vRep = find_set(G[i].second.second);
    if (uRep != vRep) {
      T.push_back(G[i]);
      union_set(uRep, vRep);
    }
  }
}
void Graph::print() {
  cout << "Edge :"
     << " Weight" << endl;
  for (int i = 0; i < T.size(); i++) {
    cout << T[i].second.first << " - " << T[i].second.second << " : "
       << T[i].first;
    cout << endl;
  }
}
int main() {
  Graph g(6);
  g.Add_Edge(0, 1, 4);
  g.Add_Edge(0, 2, 4);
  g.Add_Edge(1, 2, 2);
  g.Add_Edge(1, 0, 4);
  g.Add_Edge(2, 0, 4);
  g.Add_Edge(2, 1, 2);
  g.Add_Edge(2, 3, 3);
  g.Add_Edge(2, 5, 2);
  g.Add_Edge(2, 4, 4);
  g.Add_Edge(3, 2, 3);
  g.Add_Edge(3, 4, 3);
  g.Add_Edge(4, 2, 4);
  g.Add_Edge(4, 3, 3);
  g.Add_Edge(5, 2, 2);
  g.Add_Edge(5, 4, 3);
  g.kruskal();
  g.print();
  return 0;
}