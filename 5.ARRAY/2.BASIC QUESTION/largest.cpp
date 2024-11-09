#include<iostream>
using namespace std;
int FindLargest(int arr[],int n){
    int lgt=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>lgt){
            lgt=arr[i];
        }
    }
    return lgt;
}
int main(){
    int arr[]={4,5,24,7,8};
    cout<<FindLargest(arr,5);

    return 0;
}