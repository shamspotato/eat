

#include <iostream>
using namespace std;
int sum(int a)
{
	int num;
	if (a < 1)
		return 0;
	else 
	{
		num=a + sum(a - 1);
	}
	return num;
}
int main()
{
	int x;
	cout << "Enter a Positive Integer: ";
	cin >> x;
	if (x <= 0)
	{
		cout << "Error! Enter a Natural Number!";
		return 0;
	}
	cout<<"Sum is: "<<sum(x);
}

