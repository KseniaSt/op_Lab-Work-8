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
void edit()
{
	char s[N];
	FILE *in = fopen("in.txt", "r");
	FILE *out = fopen("out.txt", "w+");
	if (in == NULL || out == NULL)
	{
		perror("This file can not be opened");
		system("pause");
	}
	while (!feof(in))
	{
		fgets(s, sizeof(s), in);
		if (s[strlen(s) - 2] != '.' && s[strlen(s) - 2] != ',' && s[strlen(s) - 2] != ' ') fprintf(out, "%c\n", '-');
		else fprintf(out, "%s", s);
	}
	fclose(in);
	fclose(out);
}
