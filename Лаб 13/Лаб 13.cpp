#include <iostream>
void main()
{
	char str[] = "Text";
	int count = 0;
	char* pstr;
	pstr = &str[0];
	if (str)
		while (*pstr++)
			++count;
	std::cout << count;
}

