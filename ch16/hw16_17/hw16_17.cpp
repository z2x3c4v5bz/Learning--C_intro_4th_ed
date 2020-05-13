/* hw16_17 */
#include <iostream>
#include <cstdlib>
using namespace std;
class CRectangle
{
	private:
		int width;
		int height;
	
	public:
		CRectangle(int w,int h)
		{
			width=w;
			height=h;
		}
		CRectangle(void)
		{
			width=10;
			height=8;
		}
		void _display(void)
		{
			cout<<"width="<<width<<endl;
			cout<<"height="<<height<<endl<<endl;
		}
};
int main(void)
{
	CRectangle _rect1(3,4);
	CRectangle _rect2;
	
	cout<<"_rect1"<<endl;
	_rect1._display();
	cout<<"_rect2"<<endl;
	_rect2._display();

	system("pause");
	return 0;
}


/*

_rect1
width=3
height=4

_rect2
width=10
height=8

Press any key to continue . . .

*/
