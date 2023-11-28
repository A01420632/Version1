#include <iostream>
#include <string>
#include "Cuenta_clase.cpp"

using namespace std;


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
	
	
	cout << "Ingrese cantidad a depositar: ";
	cin>>d;
	miCuenta.depositar(d);
	
	cout << "Ingrese cantidad a retirar: ";
	cin>>r;
	miCuenta.retirar(r);

	cout<<"Saldo: "<<miCuenta.getSaldo();
	
	return 0;
	
}
	
