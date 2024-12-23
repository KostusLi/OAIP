#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    //B16

    //1

   /* const int n = 10;
    float* ptr = (float*)malloc(n * sizeof(float));
    
    for (int i = 0; i < n; i++)
    {
        *(ptr + i) = (-10 + rand() % 21) + (rand() % 11) / 10.0;
        cout << *(ptr + i) << "\t";
    }

    cout << endl;

    float minElement = 20, minCount=0;
    for (int i=0; i<n; i++)
    {
        if (abs(*(ptr+i))<minElement)
        {
            minElement = abs(*(ptr + i));
            minCount = i;
        }
    }
    float firstMin = -1;

    cout << "Минимальный элемент по модулю: " << minElement << endl;
    cout << "Номер минимального элемента по модулю: " << minCount << endl;

    for (int i=0; i<n; i++)
    {
        if (*(ptr + i) < 0)
        {
            firstMin = i;
            break;
        }
    }

    float sum = 0;

    if (firstMin != -1)
    {
        for (int i = 0; i < n; i++)
        {
            if (i > firstMin)
            {
                sum += *(ptr + i);
            }
        }
    }
    cout << "Сумма элементов после первого отрицательного: " << sum << endl;
    free(ptr);*/


    //2

   /* const int rows = 3, cols = 3;
    int** array = new int* [rows];

    for (int i = 0; i < rows; i++) {
        array[i] = new int[cols];
    }

    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            array[i][j] = (-10 + rand() % 21) + (rand() % 11) / 10.0;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    int product = 1, count = 0;

    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (array[i][j] >= 0)
            {
                count++;
            }
            else {
                count = 0;
            }

            if (count==3)
            {
                for (int k=0; k<count; k++)
                {
                    product *= array[i][k];
                }
                cout << product << endl;
                count = 0;
                product = 1;
            }
        }
    }

    cout << endl;
    cout << endl;

    int maxElement = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i==1 && j==0)
            {
                maxElement += array[i][j];
            }
            if (i==2 && j==1)
            {
                maxElement += array[i][j];
            }
        }
    }

    cout << maxElement << endl;

    int maxElement1 = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 0 && j == 1)
            {
                maxElement1 += array[i][j];
            }
            if (i == 1 && j == 2)
            {
                maxElement1 += array[i][j];
            }
        }
    }

    cout << maxElement1 << endl;

    if (maxElement > maxElement1)
    {
        cout << "Максимальная сумма элементов из диагонали, параллельных главной: " << maxElement << endl;
    }
    else {
        cout << "Максимальная сумма элементов из диагонали, параллельных главной: " << maxElement1 << endl;
    }
    for (int i = 0; i < rows; i++) {
    delete[] array[i];
    }
    delete[] array;*/


//B2

//1

//const int n = 10;
//int* A = (int*)malloc(n * sizeof(int));
//
//for (int i = 0; i < n; i++)
//{
//    *(A + i) = rand() % 21 - 10;
//    cout << *(A + i) << "\t";
//}
//
//cout << endl;
//
//int minElement = -256, k=0;
//
//for (int i = 0; i < n; i++)
//{
//    if (*(A + i) > minElement && *(A+i)<0)
//    {
//        minElement = *(A + i);
//        k = i+1;
//    }
//}
//
//cout << "Наибольшее значание k, при котором A[k]<0: " << k << endl;
//free(A);


//2

//const int n = 4, k = 4;
//const int rows = n, cols = k;
//    int** array = new int* [rows];
//
//    for (int i = 0; i < rows; i++) {
//        array[i] = new int[cols];
//    }
//
//    for (int i=0; i<rows; i++)
//    {
//        for (int j=0; j<cols; j++)
//        {
//            array[i][j] = rand()%21-10;
//            cout << array[i][j] << "\t";
//        }
//        cout << endl;
//    }
//
//    cout << endl;
//
//    int maxElement = -20, r=0, c=0;
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            if (array[i][j] > maxElement)
//            {
//                maxElement = array[i][j];
//                r = i;
//                c = j;
//            }
//        }
//        cout << endl;
//        if (i==rows-1)
//        {
//            if (r != 0)
//            {
//                swap(array[0], array[r]);
//            }
//
//            if (c != 0)
//            {
//                swap(array[0][0], array[0][c]);
//            }
//        }
//    }
//
//    cout << "Максимальный элемент матрицы: " << maxElement << endl;
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << array[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    for (int i = 0; i < rows; i++) {
//    delete[] array[i];
//    }
//    delete[] array;



//B4


//1

//const int n = 10;
//float* A = (float*)malloc(n * sizeof(float));
//
//for (int i = 0; i < n; i++)
//{
//    *(A + i) = (-10 + rand() % 21) + (rand() % 11) / 10.0;
//    cout << *(A + i) << "\t";
//}
//
//cout << endl;
//
//float minElement = 30.0;
//
//for (int i = 0; i < n; i++)
//{
//    if (*(A + i) < minElement)
//    {
//        minElement = *(A + i);
//    }
//}
//
//cout << "Минимальный элемент массива: " << minElement << endl;
//
//int k = 0;
//
//for (int i=0; i<n; i++)
//{
//    if (*(A + i) < 0)
//    {
//        k = i;
//        break;
//    }
//}
//
//float sum = 0;
//
//for (int i=0; i<n; i++)
//{
//    if (i > k)
//    {
//        if (*(A+i) > 0 || *(A + i) == 0)
//        {
//            sum += *(A + i);
//        }
//        else {
//            break;
//        }
//    }
//}
//
//cout << "Сумма элементов между 1-ым и 2-ым отрицательными элементами: " << sum << endl;
//free(A);


//2

//const int n = 4, k = 4;
//const int rows = n, cols = k;
//    int** array = new int* [rows];
//
//    for (int i = 0; i < rows; i++) {
//        array[i] = new int[cols];
//    }
//
//    for (int i=0; i<rows; i++)
//    {
//        for (int j=0; j<cols; j++)
//        {
//            array[i][j] = rand()%3;
//            cout << array[i][j] << "\t";
//        }
//        cout << endl;
//    }
//
//    int count = 0, r=0;
//
//    for (int j=0; j<cols; j++)
//    {
//        for (int i = 0; i < rows; i++)
//        {
//            if (array[i][j] != 0)
//            {
//                count++;
//            }
//        }
//        if (count==rows)
//        {
//            r++;
//            count = 0;
//        }
//        else {
//            count = 0;
//        }
//    }
//
//    cout << "Кол-во столбцов без 0: " << r << endl;
//
//        for (int i = 0; i < rows; i++) {
//    delete[] array[i];
//    }
//    delete[] array;


return 0;
}