#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void minElSumEl(int n, float* minElement, float* sum, float** array)
{
    *array = new float[n];
    for (int i=0; i<n; i++)
    {
        (*array)[i] = (-10 + rand() % 21) + (rand() % 11) / 10.0;
        cout << (*array)[i] << "\t";
    }
    cout << endl;
    for (int i=0; i < n; i++)
    {
        if (abs((*array)[i]) < *minElement)
        {
            *minElement = (*array)[i];
        }
    }
    int firstMinimal = 0;
    for (int i = 0; i < n; i++)
    {
        if ((*array)[i] < 0)
        {
            firstMinimal=i;
            break;
        }
    }
    if (firstMinimal!=0)
    {
        for (int i = 0; i < n; i++)
        {
            if (i > firstMinimal)
            {
                *sum += abs((*array)[i]);
            }
        }
    }
}

void searchString(string text)
{
    if (text.find("БГТУ") == string::npos)
    {
        cout << "В строке отсутствует слово 'БГТУ' " << endl;
    }
    else {
        cout << "В строке присутствует слово 'БГТУ' " << endl;
    }
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int k;
    cout << "Введите значение k: " << endl;
    cin >> k;
    switch (k) {
    case 1: {
        float sum = 0, minElement = 30;
        const int n = 6;
        float* array=nullptr;
        minElSumEl(n, &minElement, &sum, &array);
        cout << "Минимальный элемент массива по модулю: " << minElement << endl;
        cout << "Сумма элементов после первого отрицательного по модулю: " << sum << endl;
        delete[] array;
        break;
    } 
    case 2: {
        cout << "Введите строку: ";
        string text;
        cin.ignore();
        getline(cin, text);
        cout<< text <<endl;
        searchString(text);
        break;
    }
    default: {
        cout << "Введите цифру 1 или 2" << endl;
        break;
    }
    }

    return 0;
}
