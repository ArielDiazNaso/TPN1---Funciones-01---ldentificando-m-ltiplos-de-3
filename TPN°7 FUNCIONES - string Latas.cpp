#include <iostream>
#include <string>
using namespace std;

struct secuencia {
    int longitud;
    int inicio;
    int fin;
};

secuencia contadorSecuencia(string mensaje) {
    int contador = 0;
    int inicio = -1;
    secuencia maxSecuencia = {0, -1, -1};

    for (int i = 0; i < mensaje.size(); i++) {
    	
        if (mensaje[i] == 'G') {
            if (contador == 0) inicio = i;
            contador++;
            if (contador > maxSecuencia.longitud) {
                maxSecuencia = {contador, inicio, i};
            }
        } if(mensaje[i] != 'G') {
            contador = 0;
        }
    }
    return maxSecuencia;
}

secuencia contadorSegundaSecuencia(string mensaje) {
    int contador = 0;
    int inicio = -1;
    secuencia maxSecuencia = {0, -1, -1};
    secuencia segundaMaxSecuencia = {0, -1, -1};

    for (int i = 0; i < mensaje.size(); i++) {
        if (mensaje[i] == 'G') {
            if (contador == 0) inicio = i;
            contador++;
            if (contador > maxSecuencia.longitud) {
                segundaMaxSecuencia = maxSecuencia;
                maxSecuencia = {contador, inicio, i};
            } 
			if (contador > segundaMaxSecuencia.longitud && contador < maxSecuencia.longitud) {
                segundaMaxSecuencia = {contador, inicio, i};
            }
        } if(mensaje[i] != 'G') {
            contador = 0;
        }
    }
    return segundaMaxSecuencia;
}

int contadorLetrasEntreSecuencias(string mensaje) {
	int cantidadEntreSecuencias = 0;
	
    secuencia primeraSecuencia = contadorSecuencia(mensaje);
    secuencia segundaSecuencia = contadorSegundaSecuencia(mensaje);
    
    int inicio1 = primeraSecuencia.inicio;
    int inicio2 = segundaSecuencia.inicio;
    int final1 = primeraSecuencia.fin;
    int final2 = segundaSecuencia.fin;
    int longitud1 = primeraSecuencia.longitud;
    int longitud2 = segundaSecuencia.longitud;
    
    cantidadEntreSecuencias = mensaje.size()-final2-(longitud1)-(longitud2)-1;
	
    return cantidadEntreSecuencias;
}

int main() {
	
    string mensaje;
    cin>> mensaje;
    
    int cantLatas = mensaje.size();
    cout << cantLatas << endl;
    
    secuencia primeraSecuencia = contadorSecuencia(mensaje);
    cout << primeraSecuencia.longitud << endl;
    
    secuencia segundaSecuencia = contadorSegundaSecuencia(mensaje);
    cout << segundaSecuencia.longitud << endl;
    
    int contarDiferencia = contadorLetrasEntreSecuencias(mensaje);
    cout << contarDiferencia << endl;
}

