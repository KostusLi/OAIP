#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    //1


        int n=2;

        int size = 2 * n;

        int matrix[20][20]; 
        srand(time(nullptr));
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                matrix[i][j] = rand() % 21 - 10;
            }
        }

        cout << "Исходная матрица:" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << matrix[i][j] << "\t";
            }
            cout << endl;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                swap(matrix[i][j], matrix[i + n][j + n]);

                swap(matrix[i][j + n], matrix[i + n][j]);
            }
        }

        cout << "Матрица после перестановки блоков:" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << matrix[i][j] << "\t";
            }
            cout << endl;
        }





        //2

        /*const int n=3;
        int L[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                L[i][j] = (i + j) % n + 1;
            }
        }

        cout << "Латинский квадрат порядка " << n << ":" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << L[i][j] << " ";
            }
            cout << endl;
        }*/


    //3


    /*srand(time(NULL));
    double array[5][5];
    cout << "Исходный массив: \n";
    double maxArray[5][3] = { 0 };
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array[i][j] = rand() % 100 + (rand() % 100) / 100.0;
            cout << array[i][j] << "\t";
        }
        cout << "\n";
    }
    int imax = 0, jmax = 0;
    bool isIn = false;
    for (int k = 0; k < 5; k++) {
        double max = -1;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                isIn = false;
                for (int m = 0; m < k; m++) {
                    if (array[i][j] == maxArray[m][0]) {
                        isIn = true;
                        break;
                    }
                }
                if (!isIn && array[i][j] > max) {
                    max = array[i][j];
                    imax = i;
                    jmax = j;
                }
            }
        }
        maxArray[k][0] = max;
        maxArray[k][1] = imax;
        maxArray[k][2] = jmax;
        swap(array[k][k], array[imax][jmax]);
    }
    cout << "\nМассив после перестановки элементов: \n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array[i][j] << "\t";
        }
        cout << "\n";
    }*/



        return 0;
}