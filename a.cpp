#include <iostream>
using namespace std;

void printbinary(int val)
{
	for(int i=10;i>=0;i--)
	if(val & (1<<i)) cout<<"1";
		else cout<<"0";
		cout<<endl;
}

int main()
{

printbinary(5);

	return 0;
}
