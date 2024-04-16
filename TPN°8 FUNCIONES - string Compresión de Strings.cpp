#include <iostream>
#include <string>
using namespace std;

string comprimir(string frase) {
    string fraseConvertida;
    int longitud = frase.length();
    
    for (int i = 0; i < longitud; i++) {

        int contador = 1;
        while (i < longitud - 1 && frase[i] == frase[i + 1]) {
            i++;
            contador++;
        }
        fraseConvertida += frase[i];
        
        if (contador > 1) {
            fraseConvertida += '{' + to_string(contador) + '}';
        }
    }
    return fraseConvertida;
}

int main() {
    string frase;
    cout << "Introduce la cadena de caracteres: ";
    cin >> frase;
    
    string fraseConver = comprimir(frase);
    cout << "La cadena comprimida es: " << fraseConver << endl;

}

