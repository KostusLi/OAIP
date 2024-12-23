#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    //14

    //1
   /* int cols, rows, count;

    FILE *file = fopen("newfile.txt", "r");

    if (!file) {
        printf("Ошибка: не удалось открыть файл %s\n", "newfile.txt");
        return 1;
    }

    fscanf(file, "%d", &cols);
    rows=cols;
    cout << rows << endl;
    cout << cols << endl;
    int** array = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        array[i] = new int[cols];
    }


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            fscanf(file, "%d", &array[i][j]);
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    fclose(file);

    FILE* file2 = fopen("newfile2.txt", "w");

    int k;
    cout << "Введите k: ";
    cin >> k;
    while (k<0 && k>cols)
    {
        cout << "Введите валидное число k: ";
        cin >> k;
    }

    fprintf(file2, "%d", k);
    fputs("\n", file2);
    fputs("\n", file2);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (j == k)
            {
                fprintf(file2, "%d", array[i][j]);
                fputs("\n", file2);
            }
        }
    }
    fclose(file2);*/


    //2

    FILE* f = fopen("f.txt", "r");

    int array[255];
    int k=0;
    for (int i = 0; i < 200; i++)
    {
        fscanf(f, "%d", &array[i]);
        if (array[i] < 0)
        {   
            k = i - 1;
            break;
        }
        cout << array[i]<< "\t";
    }
    cout << endl;

    fclose(f);

    FILE* g = fopen("g.txt", "w");

    for (int i = 0; i <= k; i++)
    {
        bool notSame = true;
        for (int j = 0; j < i; j++)
        {
            if (array[i] == array[j])
            {
                notSame = false;
            }
        }
        if (notSame)
        {
            fprintf(g, "%d", array[i]);
            fputs("\t", g);
            cout << array[i] << "\t";
        }
    }





    return 0;
}
