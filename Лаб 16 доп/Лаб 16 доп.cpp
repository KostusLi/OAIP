#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;



 //B16
void searchMaxNumber(int n, int** A)
{
    *A = new int[n];
    int maxNumber=0;
    for (int i = 0; i < n; i++)
    {
        (*A)[i] = rand() % 5;
        cout << (*A)[i] << "\t";
        if ((*A)[i]>maxNumber)
        {
            maxNumber = (*A)[i];
        }
    }
    cout << endl;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ((*A)[i] == maxNumber)
        {
            count++;
        }
    }
    cout << "Максимальный элемент в массиве: " << maxNumber << endl;
    cout << "Кол-во повторений максимального элемента в массиве: " << count << endl;
}


void searchWords(int n,char* text)
{
    cout << "Введите строку: " << endl;
    cin.ignore();
    gets_s(text, n);
    char max_word[256], min_word[256];
    int i = 0, count = 0, maxWord = 0, minWord = 256, per1=0, per2=0;

    max_word[0] = '\0';
    min_word[0] = '\0';

    for (i = 0; i <= strlen(text); i++)
    {
        if ((text[i] != ' ') && (text[i] != '\0'))
        {
            count++;
        }
        if ((text[i] == ' ') || (text[i] == '\0'))
        {
            if (count > maxWord)
            {
                maxWord = count;
                per1 = i - 1;
            }
            if (count < minWord)
            {
                minWord = count;
                per2 = i - 1;
            }
            count = 0;
        }
    }

    cout << "Самое длинное слово: ";

    for (i = per1 - maxWord + 1; i < per1 + 1; i++)
    {
        cout << text[i];
    }

    cout << endl;
    cout << "Самое короткое слово: ";
    for (i = per2 - minWord + 1; i < per2 + 1; i++)
    {
        cout << text[i];
    }

}

//B2

void doElement(int n, int m, double** array)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            array[i][j] = rand() % 100 / 10;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Новая матрица: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (array[i][0] != 0)
            {
                array[i][j] += 1;
                cout << array[i][j] << "\t";
            }
            else {
                cout << array[i][j] << "\t";
            }
        }
        cout << endl;
    }
}

void changeSimbols(int n, char* text)
{
    cout << "Введите строку: " << endl;
    cin.ignore();
    gets_s(text, n);

    for (int i = 0; i < strlen(text); i++) {
        text[i] = static_cast<int>(text[i]);
        if (text[i] <= -1 && text[i] >= -32) {
            text[i] = text[i] - 32;
        }
        else if (text[i] == -72) {
            text[i] = -88;
        }
        else if ((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122)) {
            text[i] = '?';
        }
        cout << text[i];
    }

}


//B4
void minusIJ(int n, int** array)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            array[i][j] = rand() % 100 / 10;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > 0)
            {
                array[i][j] -= array[i - 1][j];
            }
            array[0][j] -= array[3][j];
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}


void sumOfNumber(int n, char* text)
{
    cout << "Введите строку: " << endl;
    cin.ignore();
    gets_s(text, n);

    int count = 0;

    for (int i=0; i<strlen(text); i++)
    {
        text[i] = static_cast<int>(text[i]);
        if (text[i] == 48)
        {
            count += 0;
        }
        if (text[i] == 49)
        {
            count += 1;
        }
        if (text[i] == 50)
        {
            count += 2;
        }
        if (text[i] == 51)
        {
            count += 3;
        }
        if (text[i] == 52)
        {
            count += 4;
        }
        if (text[i] == 53)
        {
            count += 5;
        }
        if (text[i] == 54)
        {
            count += 6;
        }
        if (text[i] == 55)
        {
            count += 7;
        }
        if (text[i] == 56)
        {
            count += 8;
        }
        if (text[i] == 57)
        {
            count += 9;
        }
    }
    cout << count << endl;
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    //В16

    int k;
    cout << "Введите цифру 1 или 2: ";
    cin >> k;
    switch (k) {
    case 1: {
        const int n = 10;
        int* A = nullptr;
        searchMaxNumber(n, &A);
        delete[] A;
        break;
    }
    case 2: {
        const int n = 100;
        char* text = new char[n];
        searchWords(n, text);
        delete[] text;
        break;
    }
    default: {
        cout << "Ввели не ту цифру!";
    }
    }



    //B2

    //int k;
    //cout << "Введите цифру 1 или 2: ";
    //cin >> k;
    //switch (k) {
    //case 1: {
    //    int n = 4, m = 3;
    //    double** array = new double* [n];
    //    for (int i = 0; i < n; ++i) {
    //        array[i] = new double[m];
    //    }
    //    doElement(n, m, array);
    //    delete[] array;
    //    break;
    //}
    //case 2: {
    //    const int n = 100;
    //    char* text = new char[n];
    //    changeSimbols(n, text);
    //    delete[] text;
    //    break;
    //}
    //default: {
    //    cout << "Ввели не ту цифру!";
    //}


    //}



    //В4

    //int k;
    //cout << "Введите цифру 1 или 2: ";
    //cin >> k;
    //switch (k) {
    //case 1: {
    //    int n = 4;
    //    int** array = new int* [n];
    //    for (int i = 0; i < n; ++i) {
    //        array[i] = new int[n];
    //    }
    //    minusIJ(n, array);
    //    delete[] array;
    //    break;
    //}
    //case 2: {
    //const int n = 100;
    //char* text = new char[n];
    //sumOfNumber(n, text);
    //delete[] text;
    //    break;
    //}
    //default: {
    //    cout << "Ввели не ту цифру!";
    //}
    //}


    return 0;
}

