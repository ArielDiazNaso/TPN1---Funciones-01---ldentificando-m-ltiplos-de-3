#include <iostream>
#include <map>
#include <string>
#include <cctype>

using namespace std;

int calcularValorMensaje(const string mensaje) {
    
map<char, int> valores_letras;
    valores_letras['a'] = 1;
    valores_letras['e'] = 1;
    valores_letras['o'] = 2;
    valores_letras['s'] = 2;
    valores_letras['d'] = 3;
    valores_letras['i'] = 3;
    valores_letras['n'] = 3;
    valores_letras['r'] = 3;
    valores_letras['c'] = 4;
    valores_letras['l'] = 4;
    valores_letras['t'] = 4;
    valores_letras['u'] = 4;
    valores_letras['m'] = 5;
    valores_letras['p'] = 5;
    valores_letras['b'] = 6;
    valores_letras['f'] = 6;
    valores_letras['g'] = 6;
    valores_letras['h'] = 6;
    valores_letras['j'] = 6;
    valores_letras['q'] = 6;
    valores_letras['v'] = 6;
    valores_letras['x'] = 6;
    valores_letras['y'] = 6;
    valores_letras['z'] = 6;
    valores_letras['k'] = 7;
    valores_letras['w'] = 7;
    
    int valor_total = 0;

    for (int i = 0; i < mensaje.size(); i++) {
        char letra = mensaje[i];

            letra = tolower(letra);
            
            if (valores_letras[letra] != 0) {
                
            valor_total += valores_letras[letra];
            }

    }
    return valor_total;
}
int main() {
    string mensaje;
    
    cout << "Ingrese el mensaje: ";
    getline(cin, mensaje);

    int valor = calcularValorMensaje(mensaje);
    cout << "El valor de su mensaje es: " << valor << " " << endl;

    return 0;
}
