#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");


    //1

    const int n = 10;
    int* ptr = (int*)malloc(n * sizeof(int));
    for (int i=0; i<n; i++)
    {
        *(ptr+i) = rand() % 10;
        cout << *(ptr + i) << " ";
    }

    const int C = 4;
    int count = 0;
    for (int i=0; i<n; i++)
    {
        if (*(ptr + i)>C)
        {
            count++;
        }
    }

    cout << "Кол-во значений, больших числа С: " << count << endl;

    int maxElementI = 0, max = 0;

    int product = 1;
    for (int i=0; i<n; i++)
    {
        if (abs(*(ptr + i)) > max)
        {
            max = *(ptr + i);
            maxElementI = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i>maxElementI)
        {
            product *= *(ptr + i);
        }
    }

    cout << "Произведение элементов, стоящих после максимального элемента массива: " << product << endl;
    free(ptr);



    //2

    //const int rows = 3, cols = 3;
    //int** array = new int* [rows];

    //for (int i = 0; i < rows; i++) {
    //    array[i] = new int[cols];
    //}

    //int zeroRow = -1;

    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array[i][j] = rand() % 3;
    //        cout << array[i][j] << " ";
    //    }
    //    cout << endl;
    //}

    //int firstElement = 0;

    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j=0; j<cols; j++)
    //    {
    //        if (array[i][j] == 0)
    //        {
    //            zeroRow = i;
    //            cout << zeroRow << endl;
    //            firstElement = array[zeroRow][0];
    //            break;
    //        }
    //    }
    //    if (zeroRow != -1)
    //    {
    //        break;
    //    }
    //}

    //if (zeroRow == -1) {
    //    cout << "В матрице нет строки с элементом, равным 0." << endl;
    //}
    //else {
    //    cout << "Найдена строка с нулем: " << zeroRow << endl;
    //    cout << "Первый элемент этой строки: " << firstElement << endl;

    //    for (int i = 0; i < rows; i++) {
    //        for (int j = 0; j < cols; j++) {
    //            array[i][j] -= firstElement;
    //        }
    //    }

    //    cout << "Модифицированная матрица:" << endl;
    //    for (int i = 0; i < rows; i++) {
    //        for (int j = 0; j < cols; j++) {
    //            cout << array[i][j] << " ";
    //        }
    //        cout << endl;
    //    }
    //}

    //for (int i = 0; i < rows; i++) {
    //    delete[] array[i];
    //}
    //delete[] array;



    return 0;
}