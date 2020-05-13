/* hw16_9 */
#include <iostream>
#include <cstdlib>
using namespace std;
int _max(int,int,int);
int _max(int,int);
int main(void)
{
	int a=2,b=1,c=3;
	
	cout<<"_max("<<a<<", "<<b<<", "<<c<<")="<<_max(a,b,c)<<endl;
	cout<<"_max("<<b<<", "<<a<<")="<<_max(b,a)<<endl;
	
	system("pause");
	return 0;
}
int _max(int a,int b,int c)
{
	int n=a;
	if(n<b)
		n=b;
	if(n<c)
		n=c;
	
	return n;
}
int _max(int a,int b)
{
	int n=a;
	if(n<b)
		n=b;
	
	return n;
}


/*

_max(2, 1, 3)=3
_max(1, 2)=2
Press any key to continue . . .

*/
