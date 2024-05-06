#pragma once
class Simpsons
{
private:
	double a, b, h;
	int num_intervals; 
	double func(double x);

public:
	Simpsons();
	~Simpsons();
	Simpsons(double a, double b, int num_intervals);
	void set_num_intervals(int intervals);
	void set_limits(double left, double right);
	double Simpsons_Method();
	double Simpsons_Method(double function(double x));
};

