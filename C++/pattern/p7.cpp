#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=9;j++){
            if(j>5-i && j<5+i)
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}