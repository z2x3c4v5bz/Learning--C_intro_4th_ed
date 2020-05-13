/* hw16_6 */
#include <iostream>
#include <cstdlib>
using namespace std;
int add(int,int);
int main(void)
{
	int sum,a=5,b=3;
	sum=add(a,b);
	cout<<a<<"+"<<b<<"="<<sum<<endl;
	
	system("pause");
	return 0;
}

int add(int num1,int num2)
{
	int a;
	a=num1+num2;
	return a;
}


/*

5+3=8
Press any key to continue . . .

*/
