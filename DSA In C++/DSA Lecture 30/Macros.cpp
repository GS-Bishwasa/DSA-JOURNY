#include <iostream>
using namespace std;

#define PI 3.14

int main()
{

    // #define ---> Macro Create

    // Macro Means "a piece of code in a program that is replaced by value of macro"
    
    int r = 5;
    // double pi = 3.14;

    // why we are not using "double pi = 3.14;" instead of "#define PI 3.14", Because in "double pi = 3.14;" it should take meory and affect the performance(little bit), and also if by mistakely someone increment or decrement it, it should affect the calculation, thats why we are using "#define PI 3.14"

    double area = PI * r * r;

    cout << "Area is " << area << endl;

    return 0;
}