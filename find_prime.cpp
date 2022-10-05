#include<iostream>
using namespace std;

void isPrime(int n, int i=2)
{
	while(i<n)
	{
		if (n%i==0)
		{
			cout<<n<<" is not a prime number"<<endl;
			break;
		}
		else
		{
			cout<<n<<" is a prime number"<<endl;
			break;
		}
		
		i++;
	}
}
int main(){
	// Test cases
	isPrime(17);
	isPrime(16);
	isPrime(23);
	isPrime(20);
	
	return 0;
}
