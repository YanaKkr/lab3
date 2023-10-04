// Lab_03_4.cpp
// Кухар Яна
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 11
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    double x;  // вхідний аргумент
    double y;  // вхідний параметр
    double R; // вхідний параметр
    cout<<"x=";cin >>x; 
    cout<<"y=";cin >>y;
    cout<<"R=";cin >>R;
    // розгалуження в повній формі
    if ((y<=sqrt(R*R-x*x) && y >=0 )||
         (y<=0 && y<=-R && x<=-R ))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    cin.get();
    return 0;
}


 