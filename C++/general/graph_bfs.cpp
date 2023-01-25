#include <iostream>
#include<vector>
#include<queue>
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

void BFS(vector<int> g[],int v,vector<bool> visited, int s){

    queue<int> q;

    q.push(s);
    visited[s]=true;
    cout<<"the safe path is : ";
    while(!q.empty()){
        int u=q.front();
        cout<<" "<<u;
        q.pop();
        for(int x: g[u]){
            if(!visited[x]){
                q.push(x);
                visited[x]=true;
            }
        }
    }


}

int BFSD(vector<int> graph[],int v){
    vector<bool> visited(v,false);
    int counter=0;
    for(int i=0; i<v; i++){
        if(!visited[i]){
            BFS(graph,v,visited,i);
            counter++;
        }
    }
    cout<<"counter is"<<counter;
    return counter;
}



int main(){
    int v,e;
    cout <<"Enter the number of vertices and edges: ";
    cin>>v>>e;
    vector<int> graph[e];
    for(int i=0; i<e;i++){
        int s,d;
        cout<<"Enter destination of the edge for the vertex "<<i<<endl;
        cin>>s;
        cin>>d;
        addEdge(graph,s,d);
    }
    int count= BFSD(graph,v);

    printGraph(graph,v);
    return 0;
}