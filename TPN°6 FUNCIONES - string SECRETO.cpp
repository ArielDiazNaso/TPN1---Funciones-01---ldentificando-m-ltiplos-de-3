#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string invertirTexto(string frase) {
    int start = 0;
    int end = 0;
    for (int i = 0; i < frase.size(); i++) {
        if (frase[i] == '(') {
            start = i;
        }
        if (frase[i] == ')') {
            end = i;
            
            string temp = frase.substr(start + 1, end - start - 1);
            
            reverse(temp.begin(), temp.end());
            frase.replace(start + 1, end - start - 1, temp);
        }
    }
    return frase;
}

string armarFrase(string frase) {
    string resultado;
    for (int i = 0; i < frase.size(); i++) {
        if (frase[i] != '(' && frase[i] != ')') {
            resultado += frase[i];
        }
    }
    return resultado;
}

int main() {
    string frase;
    cout<<"Ingrese una frase a descifrar: ";
    getline(cin, frase);
    
    string fraseInvertida = invertirTexto(frase);
    string fraseFinal = armarFrase(fraseInvertida);
    
    cout <<"Frase descifrada: "<< fraseFinal << endl;
    
}

