#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include"A.h"
using namespace std;
int main()
{
   float BMI;
   int height,mass;
   string category;
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
	    value.height_set(height);
		value.mass_set(mass);    
		BMI=value.bmi_calculate();
		category=value.category(BMI);
        outputfile<<BMI<<"\t"<<category<<endl;
	  }
   }
return 0;
}
