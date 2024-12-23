#include <iostream>

using namespace std;

int &searchMaxOfMin(int *array, int &n, int &maxOfMinElement, int &count)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] < 0)
        {
            if (array[i]>maxOfMinElement)
            {
                maxOfMinElement = array[i];
                count = i;
            }
        }

        if (i==n-1 && count !=n-1)
        {
            array[count] = array[i];
            array[i] = maxOfMinElement;
        }
    }
    return *array;
}

int &searchMinusElement(int** array, int count, int n, bool quest)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i][j] < 0)
            {
                count++;
                break;
            }
        }
        if (count == n)
        {
            quest = false;
        }
    }



    if (!quest)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                array[i][j] = -array[i][j];
            }
        }
    }
    return **array;
}


int& searchPercent(int* array, int &n, int &count, float &percent, int &k)
{
    for (int i = 0; i < n; i++)
    {

        if (array[i] == k)
        {
            count++;
        }

    }
    percent = count * 100.0 / n;
    return *array;
}

int& searchCounStroke(int**  array, int &count, int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i][j] == 0)
            {
                count++;
                break;
            }
        }
    }
    return count;
}

int& getSumOdd(int* array,int &n, int &sumOdd)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0)
        {
            sumOdd += array[i];
        }
    }
    return sumOdd;
}

int& searchPlusStroke(int** array, int &n, int &count)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i][j]>0 && i!=0)
            {
                count = i;
                break;
            }
        }
        if (count != 0)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == count-1)
            {
                array[i][j] = -array[i][j];
            }
        }
    }
    return **array;
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    


    //B16

   /* int k;
    cout << "Введите число (1 или 2)" << endl;
    cin >> k;
    switch (k)
    {
    case 1: {
        int n = 14, * array, maxOfMinElement = -40, count = 0;
        array = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
        {
            array[i] = rand() % 21 - 5;
            cout << array[i] << "\t";
        }
        cout << endl;
        searchMaxOfMin(array, n, maxOfMinElement, count);
        cout << maxOfMinElement << endl;
        for (int i = 0; i < n; i++)
        {
            cout << array[i] << "\t";
        }
        free(array);
        break;
    }
    case 2: {
        int n = 4, count=0;
        bool quest = true;
        int** array = new int* [n];
        for (int i = 0; i < n; i++) {
            array[i] = new int[n];
        }
        cout << "Исходная матрица: " << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                array[i][j] = rand() % 21 - 10;
                cout << array[i][j] << "\t";
            }
            cout << endl;
        }
        searchMinusElement(array, count, n, quest);
        cout << "Новая матрица:" << endl;
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
    }*/




    //B2

    /*int k;
    cout << "Введите число (1 или 2)" << endl;
    cin >> k;
    switch (k)
    {
    case 1: {
        float percent = 0.0;
        int* array, n=13, count=0, k;
        cout << "Введите число: ";
        cin >> k;
        array = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
        {
            array[i] = rand() % 5;
            cout << array[i] << "\t";
        }
        searchPercent(array, n, count, percent, k);
        cout << endl;
        cout << "Число " << k << " составляет в массиве " << percent << "%";
        free(array);
        break;
    }


    case 2: {
        int n = 5, count = 0;
        int** array = new int* [n];
        for (int i = 0; i < n; i++) {
            array[i] = new int[n];
        }

        cout << "Исходная матрица: " << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                array[i][j] = rand() % 21 - 10;
                cout << array[i][j] << "\t";
            }
            cout << endl;
        }
        searchCounStroke(array, count, n);
        cout << endl;
        cout << "Кол-во строк с нулевыми элементами: " << count << endl;
        for (int i = 0; i < n; i++) {
            delete[] array[i];
        }
        delete[] array;
        break;
    }
    default:
        cout << "Введена не та буква" << endl;
        break;
    }*/



//B4

int k;
cout << "Введите число (1 или 2)" << endl;
cin >> k;
switch (k)
{
case 1: {
    int* array, n = 15, sumOdd=0;
    array = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 200+1;
        cout << array[i] << "\t";
    }
    cout << endl;
    getSumOdd(array, n, sumOdd);
    cout << "Сумма нечетных элементов массива: " << sumOdd;
    break;
}


case 2: {
    int n = 5, count = 0;
    int** array = new int* [n];
    for (int i = 0; i < n; i++) {
        array[i] = new int[n];
    }

    cout << "Исходная матрица: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = rand() % 21 - 10;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
   
    searchPlusStroke(array, n, count);

    cout << "Новая матрица:" << endl;
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