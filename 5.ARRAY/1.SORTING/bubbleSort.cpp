#include<iostream>
using namespace std;
void bubbule(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool flag=true;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=false;
            }
            if(flag) break;
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    bubbule(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}