#include<iostream>
using namespace std;
bool isPrime(int n)
{
	// Write your code here.
	int c=0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			c++;
			if(n/i != i)
			{
				c++;
			}
		}
	}
	if(c==2)
	return true;
	else
	return false;
}
int main(){
    int n;
    cin>>n;
    cout<< isPrime(n);

    return 0;
}