#include <iostream>
using namespace std;
//Version actualizada desde la nube (Es decir desde github)
int Sumar(int num1, int num2);
int Restar(int a, int b);
float Multiplicar (int a, int b);
float Dividir(int a, int b);

int main() {
    int a,b;
    cout << "Calculadora!"<<endl;
    cout<<"Ingrese el primer numero entero:";
    cin>>a;

    cout<<"Ingrese el segundo numero entero:";
    cin>>b;
    
    cout<<"La suma de esos dos numero es: "<<Sumar(a,b)<<endl;
    cout<<"La resta de esos dos numeros es: "<<Restar(a,b)<<endl;
    cout<<"La multiplicacion de esos dos numeros es: "<<Multiplicar(a,b)<<endl;
    cout<<"La division de esos dos numeros es: "<<Dividir(a,b)<<endl;

    return 0;
}

int Sumar(int num1, int num2) {
    return num1 + num2;
}

int Restar(int a, int b){
    return a - b;
}

float Multiplicar(int a, int b){
    return a * b;
}

float Dividir(int a, int b){
    return a / b;
}
