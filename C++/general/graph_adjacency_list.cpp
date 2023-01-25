#include <iostream>
#include<vector>
using namespace std;
#define V 4

void addEdge(vector<int> list[], int a, int b){
    list[a].push_back(b);
    list[b].push_back(a);
}

void printGraph(vector<int> g[], int v){
    for(int i=0; i<v; i++){
        cout <<"Vertex "<<i<<" is connected to ";
        for(auto x:g[i]){
            cout<<" "<<x;
        }
        cout<<"\n";
    }
}

int main(){
    int edges;
    cout <<"Enter the number of Edges: ";
    cin>>edges;
    vector<int> graph[edges];
    for(int i=0; i<edges;i++){
        int s,d;
        cout<<"Enter destination of the edge for the vertex "<<i<<endl;
        cin>>s;
        cin>>d;
        addEdge(graph,s,d);
    }
    printGraph(graph,edges);

    return 0;
}

