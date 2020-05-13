/* hw16_7 */
#include <iostream>
#include <cstdlib>
using namespace std;
int add(int,int);
float add(float,float);
int main(void)
{
	int sum,a=5,b=3;
	float fsum,c=5.5,d=4.3;
	sum=add(a,b);
	fsum=add(c,d);
	cout<<a<<"+"<<b<<"="<<sum<<endl;
	cout<<c<<"+"<<d<<"="<<fsum<<endl;
	
	system("pause");
	return 0;
}

int add(int num1,int num2)
{
	int a;
	a=num1+num2;
	return a;
}
float add(float num1,float num2)
{
	float a;
	a=num1+num2;
	return a;
}


/*

5+3=8
5.5+4.3=9.8
Press any key to continue . . .

*/
