/* hw16_11 */
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
	public:
		char id;
		int width;
		int height;
		char title[50];
		
		int area(void)
		{
			return width*height;
		}
		void set_title(void)
		{
			cout<<"設定視窗標題 : ";
			cin>>title;
		}
		void display(void)
		{
			set_title();
			cout<<"所輸入的視窗標題為 : "<<title<<endl;
		}
};
int main (void)
{
	CWin win1;
	win1.id='A';
	win1.width=50;
	win1.height=40;
	
	cout<<"Window "<<win1.id<<":"<<endl;
	cout<<"Area = "<<win1.area()<<endl;
	win1.display();
	cout<<"sizeof(Win1) = "<<sizeof(win1)<<"個位元組"<<endl;
	
	system("pause");
	return 0; 
}


/*

Window A:
Area = 2000
設定視窗標題 : mywin
所輸入的視窗標題為 : mywin
sizeof(Win1) = 64個位元組
Press any key to continue . . .

*/