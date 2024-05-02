#include <iostream>

using namespace std;

class CNumber {
private:
    int num1, num2, num3;

public:
    CNumber(int, int, int);
    int obtenerMaximo();
    int obtenerMinimo();
    double obtenerPromedio();
    int contadorPares();
    int contadorImpares();
    void establecerNumeros(int, int, int);
};

CNumber::CNumber(int n1, int n2, int n3) {
    num1 = n1;
    num2 = n2;
    num3 = n3;
}

int CNumber::obtenerMaximo() {
    int max = num1;
    if (num2 > max)
        max = num2;
    if (num3 > max)
        max = num3;
    return max;
}

int CNumber::obtenerMinimo() {
    int min = num1;
    if (num2 < min)
        min = num2;
    if (num3 < min)
        min = num3;
    return min;
}

double CNumber::obtenerPromedio() {
    return (num1 + num2 + num3) / 3.0;
}

int CNumber::contadorPares() {
    int contador = 0;
    if (num1 % 2 == 0)
        contador++;
    if (num2 % 2 == 0)
        contador++;
    if (num3 % 2 == 0)
        contador++;
    return contador;
}

int CNumber::contadorImpares() {
    int contador = 0;
    if (num1 % 2 != 0)
        contador++;
    if (num2 % 2 != 0)
        contador++;
    if (num3 % 2 != 0)
        contador++;
    return contador;
}

void CNumber::establecerNumeros(int n1, int n2, int n3) {
    num1 = n1;
    num2 = n2;
    num3 = n3;
}

int main() {
    int num1 = 0;
	int num2 = 0; 
	int num3 = 0;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    CNumber numeros = CNumber(num1, num2, num3);

    cout << "Maximo: " << numeros.obtenerMaximo() << endl;
    cout << "Minimo: " << numeros.obtenerMinimo() << endl;
    cout << "Promedio: " << numeros.obtenerPromedio() << endl;
    cout << "Cantidad de numeros pares: " << numeros.contadorPares() << endl;
    cout << "Cantidad de numeros impares: " << numeros.contadorImpares() << endl;

    return 0;
}

