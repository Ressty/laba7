#include <stdio.h>
#include <conio.h>
#include <iostream>

template <typename T>
std::size_t f(T x)
{
    return sizeof(x);
}

 int main()
{
    int ix, *pix;
    double dx, *pdx, **ppdx;
    float fx, *pfx;
    char cx, *pcx, **ppcx;
    long lx, *plx;
    long double ldx, *pldx;
    long long int llix, *pllix;

    std::cout<< "Size of int: "<< f(ix)<< std::endl;
    std::cout<< "Size of double: "<< f(dx)<< std::endl;
    std::cout<< "Size of float: "<< f(fx)<< std::endl;
    std::cout<< "Size of char: "<< f(cx)<< std::endl;
    std::cout<< "Size of long: "<< f(lx)<< std::endl;
    std::cout<< "Size of long double: "<< f(ldx)<< std::endl;
    std::cout<< "Size of long long int: "<< f(llix)<< std::endl;
    std::cout<< "Size of *int: "<< f(pix)<< std::endl;
    std::cout<< "Size of *double: "<< f(pdx)<< std::endl;
    std::cout<< "Size of *float: "<< f(pfx)<< std::endl;
    std::cout<< "Size of *char: "<< f(pcx)<< std::endl;
    std::cout<< "Size of *long: "<< f(plx)<< std::endl;
    std::cout<< "Size of *long double: "<< f(pldx)<< std::endl;
    std::cout<< "Size of *long long int: "<< f(pllix)<< std::endl;
    std::cout<< "Size of **char: "<< f(ppcx)<< std::endl;
    std::cout<< "Size of **double: "<< f(ppdx)<< std::endl;
    return 0;
    
}