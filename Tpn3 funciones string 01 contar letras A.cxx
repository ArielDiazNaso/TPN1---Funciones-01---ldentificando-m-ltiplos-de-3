#include<iostream>
#include<string>
using namespace std;

int contarA(string frase){
	int contador = 0;
	
	for (int i = 0 ; i <= frase.size(); i++){
		char letra = frase[i];
		if(letra =='A' || letra == 'a'){
			contador ++;
		}
		
	}
	return contador;
}

int main(){
	string frase;
	
	getline(cin, frase);
	cout<<contarA(frase);
}