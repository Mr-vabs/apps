/******************************************************************************

Write a program to print area of 
triangle, rectangle and square 
by using the same member 
function name where calling of 
triangle, rectangle and square 
member functions will be done 
by using call by value, address 
and reference respectively.

*******************************************************************************/
#include <iostream>
using namespace std;

class Area{
  public:
    double shapeArea(double a, double b, double c)
    {
        double s = (a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
    
    double shapeArea(double* a, double* b, double* c)
    {
        double s = ((*a)+(*b)+(*c))/2;
        return sqrt(s*(s-(*a))*(s-(*b))*(s-(*c)));
    }
    
    
    double shapeArea(double l, double b)
    {
        return l*b;
    }
  
    double shapeArea(double* l, double* b)
    {
        return (*l)*(*b);
    }
    
    double shapeArea(double a)
    {
        return a*a;
    }
    
    double shapeArea(double* a)
    {
        return (*a)*(*a);
    }
};

int main()
{
    Area ar;
    double l = 5, b = 6, a = 5;
    // call by value
    cout<<ar.shapeArea(l, b)<<endl;
    cout<<ar.shapeArea(a)<<endl;
    
    double s1 = 3, s2 = 2, s3 = 4;
    cout<<ar.shapeArea(s1, s2, s3);

    
    
    //call by address
    cout<<ar.shapeArea(&l, &b)<<endl;
    cout<<ar.shapeArea(&a)<<endl;
    cout<<ar.shapeArea(&s1, &s2, &s3);
    return 0;
}
