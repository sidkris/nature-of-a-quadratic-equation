// finding nature of quadratic equation

// roots = (-b +- sqrt(b**2 - (4*a*c))) / (2*a)

// discriminant(d) = b**2 - (4*a*c)

#include <iostream>
#include <math.h>

int main(){

    float a,b,c,d,r1,r2;

    std::cout << "enter value for a : ";
    std::cin >> a;
    std::cout << "enter value for b : ";
    std::cin >> b;
    std::cout << "enter value for c : ";
    std::cin >> c;

    d = pow(b,2) - (4 * a * c);

    if (d == 0) {
        std::cout << "roots are real and equal";
    }
    else if (d > 0) {
        std::cout << "roots are real and unequal.\n";
        r1 = (-b + d)/ (2*a);
        r2 = (-b - d)/ (2*a);
        std::cout << "root 1 = " << r1 << "\n";
        std::cout << "root 2 = " << r2 << "\n";
    }
    else{
        std::cout << "imaginary.\n";
    }
    return 0;
}
