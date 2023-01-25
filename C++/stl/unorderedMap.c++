#include<bits/stdc++.h>
using namespace std;


int main(){
    unordered_map<int, int> map;
    map.emplace(10,1);
    map.emplace(5,3);
    for(auto it: map){
        cout<<it.first<<" "<<it.second<<"\n";
    }

    return 0;
}