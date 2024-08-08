#include <iostream>
using namespace std;
bool checkPalindrome(int x)
{
    int dup = x;
    int reverse = 0;
    while (x)
    {
        int lastDigit = x % 10;
        reverse = reverse * 10 + lastDigit;
        x = x / 10;
    }
    if (dup == reverse)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int x;
    cin >> x;
    cout << checkPalindrome(x);
    return 1;
}