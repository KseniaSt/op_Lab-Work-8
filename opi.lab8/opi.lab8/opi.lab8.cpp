// opi.lab8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <iostream>
#include <stdlib.h>

int _tmain(int argc, _TCHAR* argv[])
{
	Input("in.txt");
	Output("in.txt");
	Edit();
	system("pause");
	return 0;
}

