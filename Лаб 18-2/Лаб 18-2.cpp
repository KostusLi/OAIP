#include <iostream>
#include <string>
#include <cstdarg>

using namespace std;

void compr(int n, ...) {
    va_list args;
    va_start(args, n);

    for (int i = 0; i < n; i++) {
        const char* text = va_arg(args, const char*);
        for (int j = 0; j < strlen(text); j++) {
            if (text[j] != ' ') {
                cout << text[j];
            }
        }
        cout << endl;
    }
    va_end(args);
}

void searchWords(int n, ...)
{
    cout << endl;
    va_list args;
    va_start(args, n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        const char* text = va_arg(args, const char*);
        for (int j = 0; j < strlen(text); j++) {
            if (j == 0)
            {
                if (text[j] == 'a')
                {
                    count++;
                }
            }
            if (text[j] == 'a' && text[j - 1] == ' ')
            {
                    count++;
            }
            cout << text[j];
        }
        cout << endl;
        cout << "Кол-во слов, которые начинаются на букву 'a': " << count;
        cout << endl;
        count = 0;
    }
    va_end(args);
}

void fsum(int n,...)
{
    cout << endl;
    if (n < 2)
    {
        cout << "Вычисление не имеет смысла!" << endl;
    }
    va_list args;
    va_start(args, n);
    int sum = 0;
    int num1 = va_arg(args, int);

    for (int i = 1; i < n; i++) {
        int num2 = va_arg(args, int);
        sum += num1 * num2;
        num1 = num2;
    }
    cout << "Сумма: " << sum << endl;
    va_end(args);
}

void mn(int n, ...)
{
    va_list args;
    va_start(args, n);
    int maxNum = -34;
    for (int i = 0; i < n; i++) {
        int num = va_arg(args, int);
        if (num > maxNum) 
        {
            maxNum = num;
        }
    }
    cout << endl;
    cout << "Большее число из заданных: " << maxNum;
    va_end(args);
}


int main()
{
    setlocale(LC_ALL, "ru");



    //14
    compr(3, "fbwiehf wijfwe ew" ,  "jvnjovnsojv fowenvow vwej" ,  "jvheoragnearibn waurg iuerhj iuw hfuawrhwr wue" );


    //16
    searchWords(3, "apple the ananas", "arf fe erge", "fkw fagrb rtegt");


    //2
    fsum(5, 4, 7, 23, 56, 2);
    fsum(3, 4, 5, 6);


    //4
    mn(4, 3, 6, 1, 45);

    return 0;
}


