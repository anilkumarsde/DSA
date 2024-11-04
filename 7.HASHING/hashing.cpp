#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter size of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int q;
    cout<<"enter number of Query"<<endl;
    cin>>q;
    while (q--)
    {
        int number;
        cout<<"Enter number "<<endl;
        cin>>number;
        cout<<mpp[number]<<endl;
    }

    return 0;
}