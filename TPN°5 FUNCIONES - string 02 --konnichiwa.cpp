#include<iostream>
#include<string>
using namespace std;

string transformar(string nombre) {
    string nombreJapo;
    
    for (int i = 0; i < nombre.size(); i++) {
        nombreJapo += nombre[i];
        
        if (nombre[i] != 'a' && nombre[i] != 'e' && nombre[i] != 'i' && nombre[i] != 'o' && nombre[i] != 'u' && nombre[i] != 'n' && nombre[i] != ' '&& nombre[i] != 'A' && nombre[i] != 'E' && nombre[i] != 'I' && nombre[i] != 'U' && nombre[i] != 'O'&& nombre[i] != 'N' && nombre[i] != 'n') {
            if (i+1 == nombre.size() || (nombre[i+1] != 'a' && nombre[i+1] != 'e' && nombre[i+1] != 'i' && nombre[i+1] != 'o' && nombre[i+1] != 'u' && nombre[i+1] != 'A' && nombre[i+1] != 'E' && nombre[i+1] != 'I' && nombre[i+1] != 'O' && nombre[i+1] != 'U')) {
                nombreJapo += "u";
            }
        }
    }
    return nombreJapo;
}

int main(){
    int n;
    
    cin >> n;


    for(int i = 0; i < n; i++){
    	cout<<"_________________________________"<<endl;
        string nombre;
        cout << "Ingresa el nombre " << i+1 << ": ";
        getline(cin, nombre);
        cout << "Konnichi wa, " << transformar(nombre) << "-san" << endl;
    }
    return 0;
}



