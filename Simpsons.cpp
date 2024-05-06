#include "Simpsons.h"
#include <iostream>
#include <iomanip>
#include <cmath>

double Simpsons::func(double x)
{
	return sin(x);
}

Simpsons::Simpsons() 
{
	set_limits(0,1);
	set_num_intervals(10);
}

Simpsons::Simpsons(double a, double b, int intervals)
{
	set_limits(a,b);
	set_num_intervals(intervals);
}

Simpsons::~Simpsons()
{
}

void Simpsons::set_num_intervals(int intervals)
{
	if (intervals > 3 && intervals % 2 == 0)
	{
		this->num_intervals = intervals;
	}
	else
	{
		std::cout << "Interval selection invalid. Must be > 3 and even.";
	}
}

void Simpsons::set_limits(double left, double right)
{
	double temp; 
	if (right < left)
	{
		temp = right;
		right = left;
		left = temp;
	}
	this->a = left;
	this->b = right;
}

double Simpsons::Simpsons_Method()
{
	double h = (b - a)/num_intervals; 
	double sum{ 0 };
	double total{0};
	int n;
	for (int i = 0; i < num_intervals; i++)
	{
		if (i == 0 || i == num_intervals)
		{
			n = 1;
		}
		if (i % 2 == 0 && i != 0 && i != num_intervals)
		{
			n = 2;
		}
		else if (i % 2 != 0 && i != 0 && i != num_intervals)
		{
			n = 4;
		}
		sum += n * func(a + h * i);
	}
	total = (h / 3) * sum;
	return total; 
}

double Simpsons::Simpsons_Method(double func(double x))
{
	double h = ((b-a)/num_intervals);
	double sum{ 0 }, total{0};
	int n;
	for (int i = 0; i <= num_intervals; i++)
	{
		if (i == 0 || i == num_intervals)
		{
			n = 1;
		}
		if (i % 2 == 0 && i != 0 && i != num_intervals)
		{
			n = 2;
		}
		else if (i % 2 != 0 && i != 0 && i != num_intervals)
		{
			n = 4;
		}
		sum += n * func(a + h * i);
	}
	total = (h / 3) * sum;
	return total;
}

