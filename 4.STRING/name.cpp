#include<iostream>
#include<string>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkPalindrome(char name[],int n){

    int s=0;
    int e=n-1;
    while (s<=e)
    {
        if(toLowerCase(name[s]) != toLowerCase(name[e]))
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
void Reverse(char name[],int n)
{
    int s=0;
    int e=n-1;


    while (s<e)
    {
        swap(name[s++],name[e--]);
    }

}
int getLength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;

}
int main()
{
    char name[20];
    cin>>name;
    cout<<name<<endl;
    int k=getLength(name);
    cout<<k<<endl;
    Reverse(name,k);
    cout<<name;
    cout<<"palindrome or not :- "<<checkPalindrome(name,k)<<endl;

    return 0;
}