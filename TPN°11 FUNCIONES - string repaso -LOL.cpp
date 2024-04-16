#include<string>
#include<iostream>
#include<vector>
using namespace std;

vector<vector<string> > rellenarMatriz(int ileras, int columnas){
	vector<vector<string> > matriz(ileras, vector<string>(columnas));

	for(int i = 0; i < ileras ; i++){
		for(int j = 0 ; j < columnas ; j++){
			if(i % 2 == 0){
			matriz[i][j] = "L";	
			}
			if(i % 2 != 0){
			matriz[i][j] = "O";	

			}		
		}
	}
	return matriz;
}
int contador(const vector<vector<string> >& matriz){
	int contador = 0;
	
	for(int i = 0; i < matriz.size() - 2; i++){
		
		for(int j = 0; j < matriz[i].size() - 2; j++){
			if(matriz[i][j] == "L" && matriz[i+1][j+1] == "O" && matriz[i+2][j+2] == "L"){
				contador++;
			}
		}
	}
	
	contador *= 2;
	
	for(int j = 0; j < matriz[0].size(); j++){
		for(int i = 0; i < matriz.size() - 2; i++){
			if(matriz[i][j] == "L" && matriz[i+1][j] == "O" && matriz[i+2][j] == "L"){
				contador++;
			}
		}
	}

	return contador;
}
void mostrarMatriz(const vector<vector<string> >& matriz) {
    for (int i = 0; i < matriz.size(); i++) {
        for (int j = 0; j < matriz[i].size(); j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
	int ileras = 1;
	int columnas = 2;
	
	vector<vector<string> > matriz = rellenarMatriz(ileras, columnas);
	mostrarMatriz(matriz);
	cout<<ileras<<"    ";
	cout<<columnas<<"    ";
	cout<<contador(matriz);
}
