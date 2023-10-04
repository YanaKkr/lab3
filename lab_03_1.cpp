// lab_03_1.cpp
// Кухар Яна
// Лабораторна робота №3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 11

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double x;  // вхідний параметр
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B; // проміжний результат - функціонально змінна частина виразу
    cout<<"x="; cin >>x;
    A = 2*abs(5-x);
    // 1 спосіб: розгалуження в скороченій формі
    if (x <= -1)
       B = exp(abs(2+x));
    if (-1 < x && x < 1)
       B = sin(1/abs(2+x))*sin(1/abs(2+x));
    if (x >= 1)
       B = ((cos(x)*cos(x))/(1+abs(sin(x))));
    y = A - B;

    cout << endl;
    cout << "1) y = " << y << endl;

    // 2 спосіб: розгалуження в повній формі
    if (x<= -1)
        B = exp(abs(2+x));
    else
        if (x >= 1)
            B = ((cos(x)*cos(x))/(1+abs(sin(x))));
        else 
            B = sin(1/abs(2+x))*sin(1/abs(2+x));
    y= A-B;
    cout << "2) y= " << y << endl;
    cin.get();
    return 0;




}