#include<iostream>
using namespace std;
int Revesedi(int n)
{
    int reverse=0;
    while (n)
    {
        /* code */
        int last_digit=n%10;
        reverse=reverse*10+last_digit;
        n=n/10;
    }
    return reverse;

}

int main(){
    int n;
    cin>>n;
    cout<<Revesedi(n);
    return 0;
}