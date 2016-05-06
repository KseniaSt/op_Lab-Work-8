


#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;


const int N = 1000;
void Input(char*);
void output(char*);
void edit();

char s[N];

int main()
{
	Input("in.txt");
	edit();
	cout << "--------------\nInput file:\n--------------\n";
	output("in.txt");
	cout << "--------------\nOutput file:\n--------------\n";
	output("out.txt");
	system("pause");
}

