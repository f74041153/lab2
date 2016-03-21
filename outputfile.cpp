#include<iostream>
#include<fstream>
#include<cstdlib>
#include"A.h"
using namespace std;
int main()
{
   float BMI;
   int height,mass;
   ifstream readfile("file.in",ios::in);
   ofstream outputfile("file.out",ios::out);
   if(!readfile)
   {
      cerr<<"fail to open"<<endl;
	  exit(1);   
   }
   if(!outputfile)
   {
      cerr<<"fail to open"<<endl;
      exit(1);
   }
   bmi value;
   while(readfile>>height>>mass)
   {
	  if(height!=0)
	  {
	    BMI=value.bmi_calculate(height,mass);	
	    cout<<height<<" "<<mass<<" "<<BMI<<endl;
        if(BMI<15.0){outputfile<<BMI<<"\tVery severely underweight\n";}
		if(BMI<16.0&&BMI>15.0){outputfile<<BMI<<"\tUnderweight\n";}
	    if(BMI<18.5&&BMI>16.0){outputfile<<BMI<<"\tUnderweight\n";}
	    if(BMI<25.0&&BMI>18.5){outputfile<<BMI<<"\tNormal\n";}
	    if(BMI<30.0&&BMI>25.0){outputfile<<BMI<<"\tOverweight\n";}
        if(BMI<35.0&&BMI>30.0){outputfile<<BMI<<"\tObese Class I (Moderately obese)\n";}
	    if(BMI<40.0&&BMI>35.0){outputfile<<BMI<<"\tObese Class II (Severely obese)\n";}
        if(BMI>=40.0){outputfile<<BMI<<"\tObese Class III (Very severely obese)\n";}
	  }
   }
return 0;
}
