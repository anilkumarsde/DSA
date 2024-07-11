#include <iostream>
using namespace std;
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void print5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void print7(int n)
{ // this is the outer loop
    for (int i = 0; i < n; i++)
    {
        // this loop will print space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // this loop will print star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // this loop will print space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void upper(int n)

{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void lower(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print11(int n)
{
    int c = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            c = 0;
        else
            c = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
            c = 1 - c;
        }
        cout << endl;
    }
}
void print12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
void print13(int n)
{
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}
void print14(int n)
{
    for (int i = 0; i < n; i++)
    {
        char c = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}
void print15(int n)
{
    for (int i = 0; i < n; i++)
    {
        char c = 'A';
        for (int j = 0; j < n - i; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}
void print16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char c = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}
void print17(int n)
{
    for(int i =0; i<n; i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }

        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=0;j<(2*i+1);j++)
        {
            cout<<ch;
            if(j<breakpoint) ch++;
            else ch--;

        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

int main()
{

    // taking input value
    int n;
    cin >> n;
    print17(n);
    // upper(n);
    // lower(n);
    return 0;
}
