#include <iostream>
#include <cmath>


using namespace std;

double f1(double x) {
    return exp(x)+x-4;
}

double f2(double x) {
    return (x*x)-4;
}

double dichom1(double a, double b, double e) {
    double x;
    do
    {
        x = (a + b) / 2;
        if ((f1(x) * f1(a)) <= 0)
            b = x;
        else
            a = x;

    } while (abs(a - b) >= 2 * e);
    return x;
}

double dichom2(double a, double b, double e) {
    double x;
    do
    {
        x = (a + b) / 2;
        if ((f2(x) * f2(a)) <= 0)
            b = x;
        else
            a = x;

    } while (abs(a - b) >= 2 * e);
    return x;
}

double f3(double x) {
    return sin(x) + 2 + x;
}

double f4(double x) {
    return 2+(x*x*x);
}

double dichom3(double a, double b, double e) {
    double x;
    do
    {
        x = (a + b) / 2;
        if ((f3(x) * f3(a)) <= 0)
            b = x;
        else
            a = x;

    } while (abs(a - b) >= 2 * e);
    return x;
}

double dichom4(double a, double b, double e) {
    double x;
    do
    {
        x = (a + b) / 2;
        if ((f4(x) * f4(a)) <= 0)
            b = x;
        else
            a = x;

    } while (abs(a - b) >= 2 * e);
    return x;
}

double f5(double x) {
    return (x*x*x)+x-3;
}

double f6(double x) {
    return cos(x)* cos(x)* cos(x);
}

double dichom5(double a, double b, double e) {
    double x;
    do
    {
        x = (a + b) / 2;
        if ((f5(x) * f5(a)) <= 0)
            b = x;
        else
            a = x;

    } while (abs(a - b) >= 2 * e);
    return x;
}

double dichom6(double a, double b, double e) {
    double x;
    do
    {
        x = (a + b) / 2;
        if ((f6(x) * f6(a)) <= 0)
            b = x;
        else
            a = x;

    } while (abs(a - b) >= 2 * e);
    return x;
}

double f7(double x) {
    return (x * x * x) + 2*x - 1;
}

double f8(double x) {
    return exp(x)-2;
}

double dichom7(double a, double b, double e) {
    double x;
    do
    {
        x = (a + b) / 2;
        if ((f7(x) * f7(a)) <= 0)
            b = x;
        else
            a = x;

    } while (abs(a - b) >= 2 * e);
    return x;
}

double dichom8(double a, double b, double e) {
    double x;
    do
    {
        x = (a + b) / 2;
        if ((f8(x) * f8(a)) <= 0)
            b = x;
        else
            a = x;

    } while (abs(a - b) >= 2 * e);
    return x;
}

int main() {
    setlocale(LC_ALL, "ru");



    //double a = 1, b = 2, e = 0.0001;
    //double(*dihtom)(double a, double b, double e);
    //dihtom = dichom1;
    //double area = dihtom(a, b, e);
    //cout << "X= " << area << endl;
    //dihtom = dichom2;
    //area = dihtom(a, b, e);
    //cout << "X= " << area << endl;



    //ДОПЫ

    //16

    double a = -2, b = -1, e = 0.0001;

    double(*dihtom1)(double a, double b, double e);

    dihtom = dichom3;
    double area = dihtom(a, b, e);
    cout << "X= " << area << endl;
    dihtom = dichom4;
    area = dihtom(a, b, e);
    cout << "X= " << area << endl;



    //2

    /*double a = -1, b = 2, e = 0.0001;

    double(*dihtom)(double a, double b, double e);

    dihtom = dichom5;
    double area = dihtom(a, b, e);
    cout << "X= " << area << endl;
    dihtom = dichom6;
    area = dihtom(a, b, e);
    cout << "X= " << area << endl;*/


    //4

    /*double a = -1, b = 1, e = 0.0001;

    double(*dihtom)(double a, double b, double e);

    dihtom = dichom7;
    double area = dihtom(a, b, e);
    cout << "X= " << area << endl;
    dihtom = dichom8;
    area = dihtom(a, b, e);
    cout << "X= " << area << endl;*/




    return 0;
}
