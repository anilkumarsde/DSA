#include<iostream>
#include<math.h>
using namespace std;
int print(int n)
{
    if(n==1)
        return 1;

    return pow(n,3)+print(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<print(n);
    return 0;

}