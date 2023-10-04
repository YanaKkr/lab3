// Lab_03_2.cpp
// Кухар Яна
// Лабораторна робота No 3.2
// Розгалуження, задане формулою: функція з параметрами. 
// 11 варіант


#include <iostream> 
using namespace std;
int main() 
{
    double x; // вхідний аргумент
    double a; // вхідний параметр
    double b; // вхідний параметр
    double c; // вхідний параметр
    double F; // результат обчислення виразу

    cout << "a= "; cin >> a; 
    cout << "b= "; cin >> b; 
    cout << "c= "; cin >> c;
    cout << "x= "; cin >> x;

    // 1 спосіб: розгалуження в скороченій формі
    if (x<1 && c!=0)
       F = a*(x*x)+(b/c);
    if (x>1.5 && c==0)
       F=(x-a)/((x-c)*(x-c));
    if (!(x<1 && c!=0) && !(x>1.5 && c==0))
       F=(x*x)/(c*c);
    cout << endl;
    cout << "1) F = " << F << endl;

    // 2 спосіб: розгалуження в повній формі
    if (x<1 && c!=0)
       F=a*(x*x)+(b/c);
    else
        if (x>1.5 && c==0)
           F=(x-a)/((x-c)*(x-c));
           else
               F=(x*x)/(c*c);
    cout << "2) F = " << F << endl;
    cin.get();
    return 0;
}