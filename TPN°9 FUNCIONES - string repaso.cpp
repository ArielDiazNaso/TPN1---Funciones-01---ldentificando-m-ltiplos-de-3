#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct estructuraFrase {
    string frase;
    int posInicioInv;
    int posFinalInv;
    string parteInv;
};

estructuraFrase inversorFrase(estructuraFrase frase) {
    estructuraFrase auxiliar = frase;
    
    string parteInvertida = frase.frase.substr(frase.posInicioInv, frase.posFinalInv - frase.posInicioInv + 1);
    
    reverse(parteInvertida.begin(), parteInvertida.end());

    auxiliar.frase = frase.frase.substr(0, frase.posInicioInv) + parteInvertida + frase.frase.substr(frase.posFinalInv + 1);
    auxiliar.parteInv = parteInvertida;

    return auxiliar;
}

int main() {
    estructuraFrase entrada;
    cout << "Ingrese la frase a invertir: ";
    getline(cin, entrada.frase);
    cout << "Ingrese la posicion de inicio para invertir: ";
    cin >> entrada.posInicioInv;
    cout << "Ingrese la posicion de final para invertir: ";
    cin >> entrada.posFinalInv;

    estructuraFrase resultado = inversorFrase(entrada);

    cout << endl;
    cout << "Frase invertida: " << resultado.frase << endl;

}


