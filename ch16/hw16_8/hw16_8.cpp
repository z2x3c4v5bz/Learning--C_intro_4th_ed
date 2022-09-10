/* hw16_8 */
#include <iostream>
#include <cstdlib>
using namespace std;

int my_abs(int);
float my_abs(float);

int main(void){

    int a = 5, b = -7;
    float c = 3.5, d = -1.3;
    
    cout << "my_abs(" << a << ") = " << my_abs(a) << endl;
    cout << "my_abs(" << b << ") = " << my_abs(b) << endl;
    cout << "my_abs(" << c << ") = " << my_abs(c) << endl; 
    cout << "my_abs(" << d << ") = " << my_abs(d) << endl;
    
    system("pause");
    return 0;
    
}

int my_abs(int a){

    if(a < 0)
        return a * (-1);
    else
        return a;

}

float my_abs(float a){

    if(a < 0)
        return a * (-1);
    else
        return a;

}


/* Output

my_abs(5) = 5
my_abs(-7) = 7
my_abs(3.5) = 3.5
my_abs(-1.3) = 1.3
Press any key to continue . . .

*/
