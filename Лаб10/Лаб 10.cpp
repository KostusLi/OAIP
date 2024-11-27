#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	//1

	/*const int N=100;
	int i, sz, arr[N],k;
	cout << "Введите размер массива: ";
	cin >> sz;
	srand((unsigned)time(NULL));
	for (i=0; i<sz; i++)
	{
		arr[i] = rand() % 2;
		cout << "При номере " << i << " значение массива равно: " << arr[i] << endl;
	}
	int first=-1;
	int last;
	for (i=0; i<sz; i++)
	{
		if (arr[i] == 0)
		{
			if (first == -1)
			{
				first = i;
			}
			last = i;
		}
	}
	if (first != -1)
	{
		cout << "Первый индекс нулевого элементы: " << first << endl;
		cout << "Последний индекс нулевого элемента: " << last << endl;
	}
	else cout << "Нет таких нулевых элементов: " << endl;*/


	//2

        const int N = 100;
        int arr[N];       
        int k;
		srand((unsigned)time(NULL));
        cout << "Введите количество элементов в массиве (не более " << N << "): ";
        cin >> k;
		while (k>N)
		{
				cout << "Ошибка: количество элементов превышает максимально допустимое значение (не более 100). " << endl;
				cin >> k;
		}

        for (int i = 0; i < k; i++) {
			arr[i] = rand() % 10;
			cout << "При номере " << i << " значение массива равно: " << arr[i] << endl;
        }

        int mostFrequent = arr[0];
        int maxCount = 1;

        for (int i = 0; i < k; i++) {
            int count = 0; 

            for (int j = 0; j < k; j++) {
                if (arr[j] == arr[i]) {
                    count++;
                }
            }

            if (count > maxCount) {
                maxCount = count;
                mostFrequent = arr[i];
            }
        }

        cout << "Число, наиболее часто встречающееся в массиве: " << mostFrequent
            << " (встречается " << maxCount << " раз)" << endl;


	return 0;
}