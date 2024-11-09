#include<iostream>
using namespace std;
int Largest(int arr[],int n){
    int lgt=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>lgt){
            lgt=arr[i];
        }
    }
    return lgt;
}
int sencnd(int arr[],int n){
    int lgt=Largest(arr,n);
    int secondlgt=0;
    for(int i=0;i<n;i++){
        if(arr[i]>secondlgt&&arr[i]!=lgt){
            secondlgt=arr[i];
        }
    }
    return secondlgt;
}
int main(){

    int arr[]={5,4,66,10,5};
    cout<<sencnd(arr,5)<<endl;
    return 0;
}