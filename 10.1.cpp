#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

using namespace std;

bool Search(const char* s)
{
	for (int j = 0; s[j + 1] != '\0'; j++)
		if ((s[j] == '!' && s[j + 1] == '!' && s[j + 2] == '!'))
			return true;

	return false;

}

int main()
{
	char str[101];

	ifstream f("t.txt");
	f >> str;
	if (Search(str))
	{
		cout << "Is there a group with '!!!' in this file :" << endl;
		cout << "yes" << endl;
	}

	else
	{
		cout << "Is there a group with '!!!' in this file :" << endl;
		cout << "no" << endl;
	}

	f.close();

	return 0;

}
