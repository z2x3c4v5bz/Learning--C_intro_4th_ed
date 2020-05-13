/* hw16_15 */
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
class CSphere
{
	private:
		int x;
		int y;
		int z;
		int radius;
		
	public:
		void setLocation(int a,int b,int c)
		{
			if(a>0&&b>0&&c>0)
			{
				x=a;
				y=b;
				z=c;
			}
			else
			{
				x=0;
				y=0;
				z=0;
				cout<<"Input error"<<endl;
			}
		}
		void setRadius(int r)
		{
			if(r>0)
				radius=r;
			else
			{
				radius=0;
				cout<<"Input error"<<endl;
			}
		}
		double volume(void)
		{
			return  pow((((double)radius*3.14*4)/3),3);
		}
		void showCenter(void)
		{
			cout<<"Center : "<<endl;
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
};
int main(void)
{
	CSphere _sphere;
	
	_sphere.setLocation(5,2,7);
	_sphere.setRadius(3);
	cout<<"volume="<<_sphere.volume()<<endl;
	_sphere.showCenter();

	system("pause");
	return 0;
}


/*

volume=1981.39
Center :
x=5
y=2
z=7
Press any key to continue . . .

*/
