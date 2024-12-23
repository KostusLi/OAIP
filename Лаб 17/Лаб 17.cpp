#include <iostream>

using namespace std;

void getMinMax(int &minElement, int &maxElement, const int n ,int *array, int &difference)
    {
        for(int i=0; i<n; i++)
        {
            *(array + i) = rand() % 15;
            cout << *(array + i) << "\t";
            if (*(array+i) < minElement)
            {
                minElement = *(array + i);
            }
            if (*(array+i) > maxElement)
            {
                maxElement = *(array + i);
            }
        }
        cout << endl;
        difference = maxElement - minElement;
    }

void modifyMatrix(int** array, int n) {
    for (int j = 0; j < n; j++) {
        bool allPositive = true;

        for (int i = 0; i < n; i++) {
            if (array[i][j] <= 0) {
                allPositive = false;
                break;
            }
        }

        if (allPositive && j > 0) {
            for (int i = 0; i < n; i++) {
                array[i][j - 1] = -array[i][j - 1];
            }
        }
    }
}




int main()
{

    srand(time(NULL));
    setlocale(LC_ALL, "ru");

    int k;
    cout << "Введите число (1 или 2)" << endl;
    cin >> k;
    switch (k)
    {
    case 1: {
        const int  n = 14;
        int minElement = 40, maxElement = -20, difference = 0;
        int *array = new int[n];
        getMinMax(minElement, maxElement, n, array ,difference);
        cout << "Разница большего и меньшего элементов: " << difference << endl;
        delete[] array;
        break;
    }
    case 2: {
        int n;
        cout << "Введите размер массива: ";
        cin >> n;

        int** array = new int* [n];
        for (int i = 0; i < n; i++) {
            array[i] = new int[n];
        }

        cout << "Исходная матрица: " << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                array[i][j] = rand() % 10+1;
                cout << array[i][j] << "\t";
            }
            cout << endl;
        }

        modifyMatrix(array, n);

        cout << "Измененная матрица:" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << array[i][j] << "\t";
            }
            cout << endl;
        }

        for (int i = 0; i < n; i++) {
            delete[] array[i];
        }
        delete[] array;

        break;
    }
    default:
        cout << "Введена не та буква" << endl;
        break;
    }

    return 0;
}