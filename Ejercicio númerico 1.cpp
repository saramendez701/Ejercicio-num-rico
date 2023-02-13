
#include <iostream>
using namespace std;

int main() //Primer ejercicio
{
    cout << "Ingrese un numero entero: ";
    int a = 0; //Variable 1
    cin >> a;
    cout << "Ingrese un segundo numero entero: ";
    int b = 0; //Variable 2
    cin >> b;
    cout << "La suma de los dos numeros es: " << (a + b);

    system("pause"); //Segundo ejercicio

    cout << " Ingrese un numero entero: ";
    int c = 0; //Variable 1
    cin >> c;
    cout << " Ingrese un segundo numero entero: ";
    int d = 0; //Variable 2
    cin >> d;
    int r = c - d;
    cout << " la resta de los dos numeros es: " << r;
     
    if (r > 0)
    {
        cout << " El resultado es positivo ";
    }
    else
    {
        cout << " El resultado es negativo ";
    }
    system("pause"); //Tercer ejercicio
    cout << " Ingrese un numero entero: ";
    int e = 0; //Variable 1
    cin >> e;
    cout << " Ingrese un segundo numero entero: ";
    int f = 0; //Variable 2
    cin >> f;
    int s = e * f;
    cout << " la resta de los dos numeros es: " << s;

    if (s < 100)
    {
        cout << " El resultado es menor que 100 ";
    }
    else
    {
        cout << " El resultado es mayor que 100 ";
    }

};