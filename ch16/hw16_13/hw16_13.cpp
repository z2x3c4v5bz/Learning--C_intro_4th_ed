/* hw16_13 */
#include <iostream>
#include <cstdlib>
using namespace std;
class CRact
{
	public:
		int width,height;
		double weight;
		int id;
		
		void set(double wg)
		{
			weight=wg;
		}
		void set(int w,int h)
		{
			width=w;
			height=h;
		}
		void set(double wg,int w,int h)
		{
			weight=wg;
			width=w;
			height=h;
		}
		void show(void)
		{
			cout<<"ract"<<id<<endl;
			cout<<"weight="<<weight<<endl;
			cout<<"width="<<width<<endl;
			cout<<"height="<<height<<endl<<endl;
		}
};
int main(void)
{
	int a=6,b=5,c=2;
	double d=3.1415926535;
	CRact ract1,ract2;
	
	ract1.id=1;
	ract2.id=2;
	ract1.set(d);
	ract1.set(a,b);
	ract2.set(d,b,c);
	
	ract1.show();
	ract2.show();
	
	system("pause");
	return 0;
}
