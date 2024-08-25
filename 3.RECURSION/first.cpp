#include <iostream>
using namespace std;
int c = 0;
void fun()
{
    if (c == 4) // base case
    {
        return;
    }
    else // recursive case
    {
        cout << c << endl;
        c++;
        fun();
    }
}
int main()
{
    fun();
    return 0;
}