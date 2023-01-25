#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0; i<n; i++){
        //print space
        for(int j=0; j<i; j++) cout<<" ";
        for(int j=0; j<2*(n-i)-1; j++) cout<<"*";
        for(int j=0; j<i; j++) cout<<" ";

        cout<<endl;
    }
    return 0;
}