#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
   int height,mass;
   ofstream filein("file.in",ios::out);
   if(!filein)
   {
      cerr<<"fail to open"<<endl;
	  exit(1);   
   }
   filein<<"170\t68\n160\t85\n162\t43\n167\t80\n192\t58\n0\t0\n";
   return 0;
   
}
