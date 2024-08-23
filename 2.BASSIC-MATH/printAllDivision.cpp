#include <iostream>
#include <vector>
#include<math.h>
using namespace std;
void printAllDivisior(int n)
{
    vector<int> ans;

    for (int i = 1; i*i <=n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
        if(n/i != i){
            ans.push_back(n/i);
        }
        }
    }
    for (auto item : ans)
    {
        cout << item << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    printAllDivisior(n);
    return 0;
}