#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	//доп 1

	//const int N=70;
	//int arr[N], max, sz, i = 0, count = 0, sum=0, sum_2=0, max_week=0;
	//srand((unsigned)time(NULL));

	//cout << "Введите размер массива(от 0 до 100): ";
	//cin >> sz;

	//for (i; i < sz; i++)
	//{
	//	arr[i] = rand() % 100;
	//	cout << "При индексе массива " << i << " его число равно: " << arr[i] << endl;
	//	count++;
	//	sum += arr[i];
	//	if (count%7==0)
	//	{
	//		int week_number = count / 7;
	//		cout << "Сумма осадков за " << week_number << " неделю = " << sum << endl;
	//		if (sum > sum_2) {
	//			sum_2 = sum;
	//			max_week = week_number;
	//		}
	//		sum = 0;
	//	}
	//}
	//cout << endl << "Неделя с наибольшими осадками: " << max_week << "\tСумма осадков: " << sum_2 << endl;



	 //доп 2

	//int i, sz, k=0;
	//const int MaxArr = 100;
	//int arr[MaxArr];
	//srand((unsigned)time(NULL));

	//cout << "Введите размер массива(от 0 до 100): ";
	//cin >> sz;

	//while (sz > MaxArr)
	//{
	//	cout << "Введите размер массива!(от 0 до 100): ";
	//	cin >> sz;
	//}

	//for (i = 0; i < sz; i++)
	//{
	//	arr[i] = rand() % 10;
	//	cout << "При индексе массива " << i << " его число равно: " << arr[i] << endl;
	//	if (arr[i] == arr[i - 1])
	//	{
	//		k++;
	//	}

	//}
	//cout<< "Кол-во одинаковых соседних чисел: " << k;



	//доп 3


		const int MAX_SIZE = 100;
		int arr[MAX_SIZE];       
		int k;

		cout << "Введите количество элементов в массиве (не более " << MAX_SIZE << "): ";
		cin >> k;
		srand((unsigned)time(NULL));

		if (k > MAX_SIZE) {
			cout << "Ошибка: количество элементов превышает максимально допустимое значение." << endl;
			return 1;
		}


		for (int i = 0; i < k; i++) {
			arr[i] = rand() % 2;
			cout << arr[i]<< endl;
		}
		int maxLength = 1;
		int currentLength = 1;

		
		for (int i = 1; i < k; i++) {
			if (arr[i] == arr[i - 1]) {
			
				currentLength++;
			}
			else {
				
				if (currentLength > maxLength) {
					maxLength = currentLength;
				}
				currentLength = 1;  
			}
		}

		
		if (currentLength > maxLength) {
			maxLength = currentLength;
		}

	
		cout << "Наибольшее количество подряд идущих одинаковых элементов: " << maxLength << endl;



	return 0;
}
