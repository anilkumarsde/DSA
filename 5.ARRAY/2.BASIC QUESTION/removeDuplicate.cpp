
#include <iostream>
using namespace std;
int fun(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}

int main() {
int arr[]={1,1,2,2,2};
cout<<fun(arr,5);
return 0;
}
