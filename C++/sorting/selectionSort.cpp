#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    // for outer loop
    for (int i=0; i<n-1; i++ ){
        // declare the minium index in each iteration
        int minId=i;

        // select the minimun element in in the unorted part
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minId]){
                minId=j;
            }
        }

        // now swap the elements
        int temp= arr[i];
        arr[i]=arr[minId];
        arr[minId]=temp;
    }
}

int main(){
    int n=6;
    int arr[]={44,33,2,66,333,12};
    selectionSort(arr,6);
    for(auto x:arr){
        cout<<x<<" ";
    }

    return 0;
}