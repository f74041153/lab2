#include<iostream>
#include"A.h"
float bmi::bmi_calculate(int height,int mass)
{
    bmi_value=(float)(mass*100*100)/(height*height);
	return bmi_value;
}
