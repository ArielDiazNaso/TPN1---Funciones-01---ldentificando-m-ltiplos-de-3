#include<iostream>
using namespace std;

bool esMultiploDe3(int num){
	return num % 3 == 0;
}

int main(){
	int num;
	string mensaje = "no es multiplo de 3";
	cout<<"Ingrese un numero ";
	cin>>num;
	if(esMultiploDe3(num)){
		mensaje = "Es multiplo de 3 ";
	}
	cout << mensaje;
}