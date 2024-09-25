// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;
void pri(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    i++;
    pri(i,arr,n);
}

int main() {
    // Write C++ code here
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 pri(0,arr,n);
 for(int i=0;i<n;i++)
 {
     cout<<arr[i]<<endl;
 }

    return 0;
}