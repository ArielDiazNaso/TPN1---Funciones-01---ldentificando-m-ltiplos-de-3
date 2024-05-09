#include <string>
#include <iostream>

using namespace std;

class Empleado {
private:
    string Nombre;
    string Apellido;
    string Domicilio;
    int cantidadHijos;
    double sueldoBasico;
    int Antiguedad;

    double calcularDeducciones();

public:
    Empleado(string nombre, string apellido, string domicilio, int cantidad_hijos, double sueldo_basico, int antiguedad) {
        Nombre = nombre;
        Apellido = apellido;
        Domicilio = domicilio;
        cantidadHijos = cantidad_hijos;
        sueldoBasico = sueldo_basico;
        Antiguedad = antiguedad;
    }

    double calcularSueldoNeto();
};

double Empleado::calcularDeducciones() {
    double jubilacion = sueldoBasico * 0.11;
    double obraSocial = sueldoBasico * 0.03;
    double inssjp = sueldoBasico * 0.03;
    
    return jubilacion + obraSocial + inssjp;
}

double Empleado::calcularSueldoNeto() {
	
    return sueldoBasico - calcularDeducciones();
}

int main(){

    Empleado empleado("Juan", "Rodriguez", "Domicilio", 3, 900000, 12);
    double sueldoNeto = empleado.calcularSueldoNeto();
    cout << sueldoNeto << endl;

    return 0;
}

