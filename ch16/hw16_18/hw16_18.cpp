/* hw16_18 */
#include <iostream>
#include <cstdlib>
using namespace std;

class CBox
{
    private:
        int length, width, height;
        
    public:
        CBox(void)
        {
            length = 1;
            width = 1;
            height = 1;
        }

        CBox(int a, int b, int c)
        {
            length = a;
            width = b;
            height = c;
        }
        
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
    CBox box1;
    CBox box2(a, b, c);
    
    cout << "box1() volume() = " << box1.volume() << endl;
    cout << "box1() surfaceArea() = " << box1.surfaceArea() << endl << endl;
    cout << "box2(5, 3, 7) volume() = " << box2.volume() << endl;
    cout << "box2(5, 3, 7) surfaceArea() = " << box2.surfaceArea() << endl;
    
    system("pause");
    return 0;

}


/* Output

box1() volume() = 1
box1() surfaceArea() = 6

box2(5, 3, 7) volume() = 105
box2(5, 3, 7) surfaceArea() = 142
Press any key to continue . . .

*/
