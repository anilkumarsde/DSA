#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

//bruteforce approch

// int countDi(int n)
// {
//     int count = 0;
//     while (n)
//     {
//         n = n / 10;
//         count++;
//     }
//     return count;
// }

//optimal approch

int countDi(int n)
{
    int cnt =(int)log10(n)+1;
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    cout << countDi(n);
    return 0;
}