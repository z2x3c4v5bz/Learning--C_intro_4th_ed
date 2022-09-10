/* hw16_14 */
#include <iostream>
#include <cstdlib>
using namespace std;

class CWin
{
    private:
        char id;
        int width;
        int height;
        
        int area(void)
        {
            return width * height;
        }
        
    public:
        void show_area(void)
        {
            cout << "Window " << id << ", area = " << area() << endl;
        }

        void set_data(char i, int w, int h)
        {
            id = i;
            if(w > 0 && h > 0)
            {
                width = w;
                height = h;
            }
            else
            {
                width = 0;
                height = 0;
                cout << "Input error" << endl;
            }
        }

};

int main(void){
    
    CWin win1;
    
    win1.set_data('A', 50, 40);
    win1.show_area();
    
    system("pause");
    return 0;

}


/* Output

Window A, area = 2000
Press any key to continue . . .

*/
