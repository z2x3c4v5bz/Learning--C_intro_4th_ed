/* hw16_5 */
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int n,i=1,sum=0;
	do
	{
		cout<<"請輸入n值(n>0):";
		cin>>n;
	}
	while(n<=0);
	
	do
		sum+=i++;
	while(i<=n);
	cout<<"1+2+...+"<<n<<"="<<sum<<endl;
	
	system("pause");
	return 0;
}
