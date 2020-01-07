/* Finding a prime number*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number, i = 2, flag=0, sqrt_number;
	cout<<"Enter the number : ";
	cin>>number;
	sqrt_number = int(sqrt(number));
	while(i <=  sqrt_number)
	{
		if(number % i == 0)
		{
			cout<<number<<" is a Not a Prime number.";
			flag = 1;
			break;
		}
		i = i + 1;
	}
	if(flag == 0)
		cout<<number<<" is a Prime number.";
	cout<<"\n";
	return 0;
}