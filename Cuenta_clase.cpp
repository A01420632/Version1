#include <iostream>
#include <string>

using namespace std;

class CuentaBancaria {
private:
	string cuenta;
	string nombre;
	double saldo;
	
public:
	
	void setCuenta(string c) {
        cuenta=c;
    }
	
	string getCuenta() {
        return cuenta;
    }
    
    
    void setNombre(string n){
    	nombre=n;
	}
	
    string getNombre() {
        return nombre;
    }
    
    
    void setSaldo(double s) {
        saldo = s;
    }

    double getSaldo() {
        return saldo;
    }
    
    
    void depositar(double deposito) {
        saldo=saldo+deposito;
    }
    
    bool retirar(double retiro) {
    	if (retiro<=saldo)
		{
        	saldo=saldo-retiro;
        	return true;
    	}
    	
    	else
    	{
    		cout<<"Cantidad no disponible"<<endl;
    		return false;
		}
		
    }
    
    void mostrar() {
        std::cout << "Saldo: " << saldo;
    }
    
};
