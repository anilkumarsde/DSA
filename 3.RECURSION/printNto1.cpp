#include<iostream>
using namespace std;
int print(int n)
{
    if(n==0) //base case as soon as n will be 0 it return 0
        return 0;
    return n+print(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<print(n);
    return 0;

}