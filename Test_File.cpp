#include "Simpsons.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 

double func_2(double x)
{
	return (1/(1 + pow(x,2)));
}

int main()
{
	Simpsons s1(0,1,1000),s2(0,1,1000);
	double result = s1.Simpsons_Method(); 
	cout << " For the function f(x) = Sin(x) from x = " << 0 << " to " << 1 << " the Simpsons integral is " << s1.Simpsons_Method() << endl;
	double result2 = s2.Simpsons_Method(func_2);
	cout << " For the function f(x) = 1/1 + x^{-2} the integral between [0,1] is " << result2 << endl;
	system("PAUSE");
	return 0;
}