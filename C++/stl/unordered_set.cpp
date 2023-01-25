#include <iostream>
#include <unordered_set>
using namespace std;


int main(){
    unordered_set<int>  set;
    set.insert(5);
    set.insert(6);
    set.insert(1);

    for(auto it= set.begin(); it != set.end(); it++){
        cout<<*it<<" ";
    }

    if(set.find(6) != set.end()) cout<<"Element found";
    else cout<<"Element not found";

    cout<<" the set has "<<set.size() <<" elements";
}