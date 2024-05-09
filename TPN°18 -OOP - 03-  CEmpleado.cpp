#include <iostream>
using namespace std;

class CEmpleado {
    private:
        string nombre;
        int anioDeIngreso;
        double salario;
        string direccion;
    
    public:
        CEmpleado(string, int, double, string);
        void imprimirAniosDeAntiguedad();
        void siViveEnWs();
};

CEmpleado::CEmpleado(string name, int yearOfIncome, double salary, string adress){
    nombre = name;
    anioDeIngreso = yearOfIncome;
    salario = salary;
    direccion = adress;
}

void CEmpleado::imprimirAniosDeAntiguedad(){
    cout << "El empleado " << nombre << " tiene " << 2024 - anioDeIngreso << " años de antiguedad." << endl;
}

void CEmpleado::siViveEnWs(){
    if(direccion.find("WallStreet") != -1){
        cout << "El empleado " << nombre << " vive en la calle Wall Street." << endl;
    } else {
        cout << "El empleado " << nombre << " no vive en la calle Wall Street." << endl;
    }
}

int main() {
    string nombre, direccion;
    int anioDeIngreso;
    double salario;
    
    cout << "Ingrese el nombre del empleado: ";
    cin >> nombre;
    
    cout << "Ingrese el anio de ingreso del empleado: ";
    cin >> anioDeIngreso;
    
    cout << "Ingrese el salario del empleado: ";
    cin >> salario;
    
    cout << "Ingrese la direccion del empleado: ";
    cin.ignore();
    getline(cin, direccion);

    CEmpleado empleado1(nombre, anioDeIngreso, salario, direccion);
    empleado1.imprimirAniosDeAntiguedad();
    empleado1.siViveEnWs();
    
}

