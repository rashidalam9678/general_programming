#include<bits/stdc++.h>
using namespace std;




void insertionSort(int a[], int s){
    // start from the second element
    for(int j=1; j<s; j++){
        // take the second element as the key
        int key=a[j];

        // start iterating from j-1 to 0
        int i=j-1;
        while( i>=0 && a[i]>key) {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
        
    }
}

int main(){
    int a[]= {44,33,11,2,66};
    insertionSort(a,5);
    for(int i=0; i<5;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}
