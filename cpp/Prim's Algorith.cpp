#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int getMinimumVertex(vector<bool>& visited, vector<int>& weight) {
    int v = visited.size();
    int minVertex = -1;
    for(int i = 0; i < v; i++) {
        if(!visited[i] and (minVertex == -1 or weight[i] < weight[minVertex])) {
        	minVertex = i;
        }
    }
    
    return minVertex;
}


vector<pair<pair<int,int>,int>> primsMST(vector<vector<int>>& graph, vector<bool>& visited, vector<int>& parent, vector<int>& weight) {
    // First we find the vertex with minimum weight and then explore the remaining vertex
    int v = visited.size();
    // The loop runs to v - 1 since when we reach the last vertex
    // al of it's neightbour would already have been analysed
    for(int i = 0; i < v - 1; i++) {
        // minimum weighted vertex
        int minVertex = getMinimumVertex(visited, weight);
        visited[minVertex] = true;
        
        // Exploring the neighbours of minVertex
        for(int j = 0; j < v; j++) {
            if(graph[minVertex][j] and !visited[j] and graph[minVertex][j] < weight[j]) {
                weight[j] = graph[minVertex][j];
                parent[j] = minVertex;
            }
        }
    }
    
    vector<pair<pair<int,int>,int>> answer;
    
    // Here the loop starts with 1 since parent[0] = -1 and as such there is no edge that ends at zero.
    for(int i = 1; i < v; i++) {
        if(parent[i] < i) {
            answer.push_back({{parent[i], i}, weight[i]});
        } else {
            answer.push_back({{i, parent[i]}, weight[i]});
        }
    }
    
    return answer;
} 
    


int main() {
    // Write your code here
    int v, e;
    cin >> v >> e;
    
    vector<vector<int>> graph(v, vector<int>(v));
    
    for(int i = 0; i < e; i++) {
        int source, destination, weight;
        cin >> source >> destination >> weight;
        graph[source][destination] = weight;
        graph[destination][source] = weight;
    }
    
    vector<bool> visited(v, false);
    
    vector<int> parent(v);
    vector<int> weight(v, INT_MAX); // Weight of vertices initialized with infinity
    
    // Taking the 0 vertex as source
    parent[0] = -1;
    weight[0] = 0;
    
    vector<pair<pair<int,int>,int>> MST = primsMST(graph, visited, parent, weight);
    
	for(auto it : MST) {
        cout << it.first.first << " " << it.first.second << " " << it.second << endl;
    }
    
    return 0;
}
