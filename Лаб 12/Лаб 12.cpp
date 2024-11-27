#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");


	//1

	/*const int SIZE = 5;
	int x[SIZE], y[SIZE];
	int* ptr = x;
	int* pte = y;

	srand((unsigned)time(NULL));

	int count = 0;

	for (int i = 0; i < SIZE; i++)
	{
		*(ptr + i) = rand() % 5;
		cout << *(ptr + i) << endl;
	}

	cout << "<------------------------------------------------->" << endl;

	for (int j = 0; j < SIZE; j++)
	{
		*(pte + j) = rand() % 5;
		cout << *(pte + j) << endl;	
	}

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (*(ptr + i) == *(pte + j))
			{
				count++;
			}
		}
	}
	cout << "<------------------------------------------------->" << endl;
	cout << count;*/



	//2

		const int size = 10;
		int K[size] = { 7, 2, 9, 1, 6, 8, 3, 5, 4, 10 };
		int t = 5;

		int temp[size];
		int* lessPtr = temp;     
		int* greaterPtr = temp;  

		for (int i = 0; i < size; i++) {
			if (K[i] < t) {
				*lessPtr++ = K[i];
			}
		}

		greaterPtr = lessPtr;

		for (int i = 0; i < size; i++) {
			if (K[i] >= t) {
				*lessPtr++ = K[i];
			}
		}

		for (int i = 0; i < size; i++) {
			K[i] = temp[i];
		}

		cout << "Преобразованный массив: ";
		for (int i = 0; i < size; i++) {
			cout << K[i] << " ";
		}
		cout << endl;



	return 0;
}
