#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	

	//В16

	//1

        const int k = 5;
        const int n = 6;
        int X[k] = { 1, 2, 3, 4, 5 };
        int Y[n] = { 3, 4, 5, 6, 7, 8 };
        int *ptr=X, *pte=Y;

        int Z[k > n ? n : k];
        int* pty = Z;
        int zSize = 0;
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < n; j++) {
                if (*(ptr + i) == *(pte+j)) {
                    bool inZ = false;
                    for (int l = 0; l < zSize; l++) {
                        if (*(pty+l) == *(pte + i)) {
                            inZ = true;
                            break;
                        }
                    }
                    if (!inZ) {
                        *(pty+zSize++) = *(ptr+i);
                    }
                }
            }
        }


        cout << "Общие элементы: ";
        for (int i = 0; i < zSize; i++) {
            cout << *(pty+i) << " ";
        }
        cout << endl;


	//2
       /*const int n = 8; 
       int A[n] = { 5, -2, 9, -8, 4, -1, 6, -7 }; 

       int temp[n]; 
       int* tempPtr = temp; 

      
       int* ptr = A;
       int* endptr = A + n;

        for (int* p = ptr; p < endptr; p++) {
            if (*p < 0) {
                *tempPtr++ = *p;
            }
        }

        for (int* p = ptr; p < endptr; p++) {
            if (*p >= 0) {
                *tempPtr++ = *p;
            }
        }

        tempPtr = temp;
        for (int* p = ptr; p < endptr; p++) {
            *p = *tempPtr++;
        }

        cout << "Преобразованный массив: ";
        for (int* p = ptr; p < endptr; p++) {
            cout << *p << " ";
        }
        cout << endl;*/


	//В2

	//1

	/*const int n=15;
	int A[n], B[n], S[n];
	int *ptr=A, *pte=B, *pty=S;

	srand(time(NULL));

	int k = 0;

	for (int i = 0; i < n; i++)
	{
		*(ptr + i) = rand() % 5;
		cout << *(ptr + i) << endl;
		*(pte + i) = rand() % 5;
		cout << *(pte + i) << endl;
		*(pty + i) = *(ptr + i) + *(pte + i);
		cout << i << " элемент массива S равен: " << *(pty + i) << endl;
		cout << endl;
	}*/


	//2

	/*const int n = 10;
	int A[n] = { 3, 7, 1, 2, 8, 4, 10, 11, 5, 9 };
	int* ptr = A;

	const int maxCheck = n + 1;
	bool found[maxCheck] = { false };

	for (int i = 0; i < n; i++) {
		if (*(ptr + i) > 0 && *(ptr + i) <= n) {
			found[*(ptr + i)] = true;
		}
	}

	int missingNumber = 1;
	for (int i = 1; i <= n; i++) {
		if (!found[i]) {
			missingNumber = i;
			break;
		}
	}

	cout << "Наименьшее отсутствующее натуральное число: " << missingNumber << endl;*/


	//В4

	//1

//const int n = 15, m = 13;
//int A[n], B[m];
//int* ptr = A, * pte = B;
//
//int maxEl;
//
//srand(time(NULL));
//
//
//cout << "Массив A: ";
//maxEl = *ptr;
//for (int i = 0; i < n; i++) {
//    *(ptr + i) = rand() % 10;
//    cout << *(ptr + i) << " ";
//    if (*(ptr + i) > maxEl) {
//        maxEl = *(ptr + i);
//    }
//}
//cout << endl;
//
//
//cout << "Массив B: ";
//for (int i = 0; i < m; i++) {
//    *(pte + i) = rand() % 10;
//    cout << *(pte + i) << " ";
//}
//cout << endl;
//
//bool found = false;
//for (int i = 0; i < m; i++) {
//    if (*(pte + i) == maxEl) {
//        found = true;
//        break;
//    }
//}
//
//if (found) {
//    cout << "Максимальный элемент массива A (" << maxEl << ") содержится в массиве B." << endl;
//}
//else {
//    cout << "Максимальный элемент массива A (" << maxEl << ") не содержится в массиве B." << endl;
//}


//2

//const int n = 10;
//int Z[n];
//int* ptr = Z;
//int count = 0;
//
//srand(time(NULL));
//
//for (int i = 0; i < n; i++) {
//	*(ptr + i) = rand() % 10;
//	cout << *(ptr + i) << endl;
//    bool isUnique = true;
//    for (int j = 0; j < i; j++) {
//        if (*(ptr + i) == *(ptr + j)) {
//            isUnique = false;
//            break;
//        }
//    }
//    if (isUnique) {
//        count++;
//    }
//}
//
//cout << "Количество различных чисел в массиве: " << count << endl;





	return 0;
}