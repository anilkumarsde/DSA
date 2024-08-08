// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
bool checkPalindrome(int x)
{
    int k = (int)log10(x)+1;
    int armstrong = 0;
    int dup = x;
    while (dup)
    {
        int lastDigit = dup / 10;
        armstrong = armstrong + pow(lastDigit, k);
        dup = dup / 10;
    }
    return x == armstrong ? true : false;
}

int main()
{
    int n;
    cin>>n;
    cout<<checkPalindrome(n);
    return 1;
}