// include iostream

#include <iostream>
//
using namespace std;

//함수
double square(double x)
{
    return x*x;
}
//함수
void print_square(double x)
{
    // include (‘‘import’’) the declarations for the I/O stream library // make names from std visible without std:: (§3.3)
    // square a double precision floating-point number
    cout << "the square of " << x << " is " << square(x) << "\n"; }

int main() {
    print_square(3.234); // print: the square of 1.234 is 1.52276
}
