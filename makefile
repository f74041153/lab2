outputfile:A.o outputfile.o
	g++ -o outputfile A.o outputfile.o

outputfile.o:outputfile.cpp A.h
	g++ -c outputfile.cpp	

A.o:A.cpp A.h
	g++ -c A.cpp
