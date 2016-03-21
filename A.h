#include<iostream>
using namespace std;
class bmi
{
	public:
	   void height_set(int h);
	   int height_get();
       void mass_set(int m);
       int mass_get();	   
	   float bmi_calculate();
	   string category(float BMI);
	private:	
	   int height,mass;
};
