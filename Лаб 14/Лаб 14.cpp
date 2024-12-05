#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");


	/*const int n = 3;
	int m = 0;
	int A[n][n] = { {1,2,3},{4,5,6},{7,8,9} };
	cout << "Заданная матрица: " << endl;


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		if (i != m)
		{
			int temp = A[m][i];
			A[m][i] = A[i][m];
			A[i][m] = temp;
		}
	}

	cout << "Преобразованная матрица: "<< endl;
	for (int i=0; i<n;i++)
	{
		for (int j=0; j<n; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}*/






	const int n = 3, m = 2;

		float array[n][m];
		srand(time(NULL));

		float* ptr = &array[0][0];

		cout << "Исходная матрица:" << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				*(ptr+i* m + j) = static_cast<float>(rand() % 2);
				cout << *(ptr + i * m + j) << " ";
			}
			cout << endl;
		}

		int zero_row = -1;
		for (int i = 0; i < n; i++) {
			bool all_zeros = true;
			for (int j = 0; j < m; j++) {
				if (*(ptr +i * m + j) != 0) {
					all_zeros = false;
					break;
				}
			}
			if (all_zeros) {
				zero_row = i;
				break;
			}
		}
		if (zero_row != -1) {
			cout << "Первая строка с нулями: " << zero_row << endl;
			for (int i = 0; i < n; i++) {
				*(ptr+i*m+zero_row) /= 2;
			}
		}
		else {
			cout << "Строк с нулями нет." << endl;
		}

		if (zero_row != -1)
		{
			cout << "Измененная матрица:" << endl;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					cout << *(ptr + i * m + j) << " ";
				}
				cout << endl;
			}
		}

	return 0;
}

