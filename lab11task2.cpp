
#include<math.h>
#include <iostream>
using namespace std;
int exp(int a, int b)
{
	int x = 1;
	if (b == 0)
		return 1;
	else
	{
		x =a*exp(a, b-1);
	}
	return x;
}
int main()
{
	int base, pow;
	cout << " Enter a Base: ";
	cin >> base;
	cout << "Enter a power: ";
	cin >> pow;
	if (pow <= 0)
	{
		cout << "ERROR! Enter a Positive Power.";
		return 0;

	}
	cout<<exp(base, pow);

}

