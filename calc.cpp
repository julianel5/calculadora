#include <iostream>
using namespace std;

int Sumar(int a, int b);

int main() {
    int a,b;
    cout << "Calculadora!"<<endl;
    cout<<"Ingrese el primer numero entero:";
    cin>>a;

    cout<<"Ingrese el segundo numero entero:";
    cin>>b;
    
    cout<<"La suma de esos dos numero es: "<<Sumar(a,b);
    
    return 0;
}

int Sumar(int a, int b) {
    return a + b;
}