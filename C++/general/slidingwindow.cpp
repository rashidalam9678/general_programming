#include<iostream>
// #include <math.h>
using namespace std;

int main(){
    int a[] = { 4, 5,1,-4,-9};
    int k=2;
    int sum=0;
    for (int i=0; i<k; i++){
        sum+=a[i];
    }
    int maximum=sum;

    for (int i=k; i<5 ; i++){
        sum+=(a[i]-a[i-1]);
        maximum=max(maximum,sum);
    }
    cout<<"maximum sum =: "<< maximum;
    return 0;

}