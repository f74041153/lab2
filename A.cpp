#include<iostream>
#include"A.h"
void bmi::height_set(int h)
{
   height=h;
}
int bmi::height_get()
{
   return height;
}
void bmi::mass_set(int m)
{
   mass=m;
}
int bmi::mass_get()
{
   return mass;
}

float bmi::bmi_calculate()
{
    return (float)(mass_get()*100*100)/(height_get()*height);
}
string bmi::category(float BMI)
{
   string s;
   if(BMI<15.0){s="\tVery severely underweight\n";}
   if(BMI<16.0&&BMI>15.0){s="\tseverly Underweight\n";}
   if(BMI<18.5&&BMI>16.0){s="\tUnderweight\n";}
   if(BMI<25.0&&BMI>18.5){s="\tNormal\n";}
   if(BMI<30.0&&BMI>25.0){s="\tOverweight\n";}
   if(BMI<35.0&&BMI>30.0){s="\tObese Class I (Moderately obese)\n";}
   if(BMI<40.0&&BMI>35.0){s="\tObese Class II (Severely obese)\n";}
   if(BMI>=40.0){s="\tObese Class III (Very severely obese)\n";}
   return s;
}
