#include<iostream>
#include<vector>
using namespace std;

void mostVect(vector<int> vecDin){
    int tamanio = vecDin.size();

    for (int i = 1; i < tamanio; i++){
        cout << vecDin[i] << endl;
    }
}

vector<int> descifrarFrase(string frase) {
    vector<int> vecAux;
    int aux = 0;
    
    for (int i = 0; i < frase.size(); i++){
        if (frase[i] == '*'){
            vecAux.push_back(aux);
            aux = 0;
        }if(frase[i] != '*'){
            aux++;
        }
    }
    return vecAux;
}

int main(){
    string frase;
    
    cout << "Ingrese la frase a descifrar: ";
    cin >> frase;

    vector<int> valores = descifrarFrase(frase);
    mostVect(valores);
}

