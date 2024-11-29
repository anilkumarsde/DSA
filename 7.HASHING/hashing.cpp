#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter size of array"<<endl;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
           mpp[arr[i]]++;
    }
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }


    // int q;
    // cout<<"enter number of Query"<<endl;
    // cin>>q;
    // while (q--)
    // {
    //     int number;
    //     cout<<"Enter number "<<endl;
    //     cin>>number;
    //     cout<<mpp[number]<<endl;
    // }

    return 0;
}