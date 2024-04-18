#include <iostream>
#include <string>
using namespace std;

string invertirParte(string texto, int inicio, int final) {
	
    for (int i = inicio, j = final; i < j; ++i, --j) {
        char temp = texto[i];
        texto[i] = texto[j];
        texto[j] = temp;
    }
    return texto;
}

int main() {
    int inicio;
    int final;
    string texto;

    cin >> inicio;
    cin >> final;
    cin.ignore();
    getline(cin, texto);

    string textoInvertido = invertirParte(texto, inicio, final);

    cout << textoInvertido << endl;

}

