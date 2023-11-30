#include <iostream>
#include <string>

using namespace std;

class Automovil {
private:
    int velocidad,kilometraje; // Atributo de la clase
    std::string modelo,color, marca;

public:
    // Método para establecer la velocidad del automóvil
    void setVelocidad(int v) {
        velocidad = v;
    }

    // Método para obtener la velocidad del automóvil
    int getVelocidad() {
        return velocidad;
    }
    
    void setModelo(string m) {
        modelo = m;
    }

    // Método para obtener la velocidad del automóvil
    string getModelo() {
        return modelo;
    }
    
    void setColor(string c) {
        color = c;
    }

    // Método para obtener la velocidad del automóvil
    string getColor() {
        return color;
    }
    
    void setMarca(string ma) {
        marca = ma;
    }

    // Método para obtener la velocidad del automóvil
    string getMarca() {
        return marca;
    }

    void setKilometraje(int k) {
        kilometraje = k;
    }

    // Método para obtener la velocidad del automóvil
    int getKilometraje() {
        return kilometraje;
    }


    // Método para encender el motor del automóvil
    void encender() {
        std::cout << "El motor se ha encendido" << std::endl;
    }
    
    void frenar() {
        std::cout << "El auto se ha frenado" << std::endl;
    }
    
    void apagar() {
        std::cout << "El motor se ha apagado" << std::endl;
    }
};

int main() {
	
	std::string nomModelo;
	std::string nomColor;
	std::string nomMarca;
	int nomKilometraje;
	
	cout<<"Ingresa modelo del auto: ";
	cin>>nomModelo;

	cout<<"Ingresa color del auto: ";
	cin>>nomColor;

	cout<<"Ingresa marca del auto: ";
	cin>>nomMarca;
	
	cout<<"Ingresa kilometraje del auto: ";
	cin>>nomKilometraje;
	
    Automovil miAuto; // Crear un objeto de la clase Automovil

    miAuto.encender(); // Encender el motor
    miAuto.setVelocidad(60); // Establecer la velocidad a 60 km/h
    miAuto.setModelo(nomModelo);
    miAuto.setColor(nomColor);
    miAuto.setMarca(nomMarca);
    miAuto.setKilometraje(nomKilometraje);
    

    std::cout << "Velocidad: " << miAuto.getVelocidad() << " km/h" << std::endl;
    std::cout << "Modelo: " << miAuto.getModelo() << std::endl;
    std::cout << "Color: " << miAuto.getColor() << std::endl;
    std::cout << "Marca: " << miAuto.getMarca() << std::endl;
    std::cout << "Kilometraje: " << miAuto.getKilometraje() << std::endl;
    
    miAuto.frenar();
    miAuto.apagar();

    return 0;
}
