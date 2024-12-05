#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");



	//1

	/*const char string[] = "Hi and hello people";

	char max_word[256], min_word[256], hate[256];
	int i=0, count = 0, maxWord = 0, minWord=256, per1, per2;
	cout << string << endl;

	max_word[0] = '\0';
	min_word[0] = '\0';
	
	for (i=0; i<strlen(string)+1; i++)
	{
		if ((string[i]!=' ') && (string[i]!='\0'))
		{
			count++;
		}
		if ((string[i] == ' ') || (string[i]=='\0'))
		{
			if (count > maxWord)
			{
				maxWord = count;
				per1 = i - 1;
			}
			if (count < minWord)
			{
				minWord = count; 
				per2 = i - 1;
			}
			count = 0;
		}
	}

	cout << "Самое длинное слово: ";

	for (i=per1-maxWord+1; i<per1+1; i++)
	{
		cout << string[i];
	}

	cout << endl;
	cout << "Самое короткое слово: ";
	for (i=per2-minWord+1; i<per2+1; i++)
	{
		cout << string[i];
	}*/





	//2

	char string[100] = { "" };
	const char* str = string;
	gets_s(string);
	int even=0, position = 1;

	for (int i = 0; i < strlen(str); i++)
	{
		if ((*(str+i) == '2') || (*(str+i) == '4') || (*(str+i) == '6') || (*(str+i) == '8'))
		{
			cout << "Четным числом является цифра, стоящая на позиции: " << position << " : " << * (str + i) << endl;
			position++;
		}
	}


 //   return 0;
}