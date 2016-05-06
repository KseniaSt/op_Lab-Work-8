#include "stdafx.h"
#include "interface.h"

const int N = 1000;

void Input(char*name)
{

	FILE *in = fopen(name, "w+");
	if (in == NULL)
	{
		perror("This file can not be opened");
		system("pause");
	}
	char ch;
	cout << "enter:\n";
	while ((ch = _getch()) != 122)
		if (ch == 13) { fputc('\n', in); cout << endl; }
		else  { printf("%c", ch); fputc(ch, in); }

		cout << endl;
		fclose(in);
}


void output(char*name)
{
	//strcat(NameFile, ".txt");
	FILE* file = fopen(name, "r"); //open file for reading
	char arr[N];
	//printf("\nFile %s:", NameFile);
	while (fgets(arr, N, file) != NULL)
		printf("%s", arr);

	printf("\n");
	fclose(file);
}