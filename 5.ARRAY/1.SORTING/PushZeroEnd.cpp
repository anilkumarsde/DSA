#include<iostream>
using namespace std;
void bubbule(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {

        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j] == 0)
            {
                swap(arr[j],arr[j+1]);

            }

        }
    }
}
int main()
{
    int arr[]={0,5,0,5,0};
    bubbule(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}