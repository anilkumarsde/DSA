#include <iostream>
using namespace std;
bool checkSorted(int arr[], int n)
{
    int i = 1;
    for (i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            break;
        }
    }
    if (i == n)
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
    int arr[] = {1, 2, 3, 4, 5};
    int c = checkSorted(arr, 5);
    if (c)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 1;
}
