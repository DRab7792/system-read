#include <string>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include "time_functions.h"
using namespace std;
//Author - Dan Rabinowitz
void readBitByBit(char inputName[100], char outputName[100]);
void readLineByLine(char inputName[100], char outputName[100]);

void readBitByBit(char inputName[100], char outputName[100]){
	//Initalize the variables and open the input file
	ifstream inStream;
	inStream.open(inputName);

	//Read the data from the input file and write to the output file
	char chr;	
	ofstream outStream;
	outStream.open(outputName);
	start_timing();
	while (inStream.good()){
		chr = inStream.get();
		outStream.write(&chr, 1);
	}
	stop_timing();
	inStream.close();
	outStream.close();

	//Compute and print the CPU time
	printf("The CPU time spent on this program is %10.3f seconds\n",get_CPU_time_diff());
}

void readLineByLine(char inputName[100], char outputName[100]){
	//Initalize the variables and open the input file
	ifstream inStream;
	inStream.open(inputName);

	//Read the data from the input file and write to the output file
	char line[1024];	
	ofstream outStream;
	outStream.open(outputName);
	start_timing();
	while (inStream.good()){
		inStream.getline(line, 1024);
		outStream.write(line, 1024);
	}
	stop_timing();
	inStream.close();
	outStream.close();

	//Compute and print the CPU time
	printf("The CPU time spent on this program is %10.3f seconds\n",get_CPU_time_diff());
}

int main(){
	cout << "Enter the name of the input file: ";
	char inName[100];
	cin >> inName;
	cout << "Enter the name of the byte by byte output file: ";
	char outByteName[100];
	cin >> outByteName;
	cout << "Enter the name of the line by line output file: ";
	char outLineName[100];
	cin >> outLineName;
	
}
