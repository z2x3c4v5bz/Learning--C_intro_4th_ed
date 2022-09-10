/* hw16_12 */
#include <iostream>
#include <cstdlib>
using namespace std;

class CBox
{
    public:
        int length, width, height;
        
        int volume(void)
        {
            return length * width * height;
        }

        int surfaceArea(void)
        {
            return 2 * (width * length + width * height + height * length);
        }
};

int main (void){
    
    int a = 5, b = 3, c = 7;
    int n1 = 1, n2 = 1, n3 = 1;
    CBox box1, box2;
    
    box1.length = a;
    box1.width = b;
    box1.height = c;
    box2.length = n1;
    box2.width = n2;
    box2.height = n3;
    
    cout << "box1(5,3,7) volume() = " << box1.volume() << endl;
    cout << "box1(5,3,7) surfaceArea() = " << box1.surfaceArea() << endl << endl;
    cout << "box2(1,1,1) volume() = " << box2.volume() << endl;
    cout << "box2(1,1,1) surfaceArea() = " << box2.surfaceArea() << endl;
    
    system("pause");
    return 0;

}


/* Output

box1(5,3,7) volume() = 105
box1(5,3,7) surfaceArea() = 142

box2(1,1,1) volume() = 1
box2(1,1,1) surfaceArea() = 6
Press any key to continue . . .

*/
