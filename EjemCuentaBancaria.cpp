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
    
    void retirar(double retiro) {
    	if (retiro<=saldo)
		{
        	saldo=saldo-retiro;
    	}
    	
    	else
    	{
    		cout<<"Cantidad no disponible"<<endl;
		}
		
    }
    
    void mostrar() {
        std::cout << "Saldo: " << saldo;
    }
    
};

int main() {
	
	string cNombre;
	double cSaldo,d,r;
	
	
	cout<<"Ingrese nombre: ";
	cin>>cNombre;
	cout<<"Ingrese saldo inicial: ";
	cin>>cSaldo;
	
	CuentaBancaria miCuenta;
	
	miCuenta.setCuenta("1425481562414956");
	miCuenta.setNombre(cNombre);
	miCuenta.setSaldo(cSaldo);
	
	
	cout << "Ingrese candidad a depositar: ";
	cin>>d;
	miCuenta.depositar(d);
	
	cout << "Ingrese cantidad a retirar: ";
	cin>>r;
	miCuenta.retirar(r);

	cout<<"Saldo: "<<miCuenta.getSaldo();
	
	return 0;
	
}
	
