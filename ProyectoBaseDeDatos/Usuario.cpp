#include <iostream>
using namespace std;

class Usuario{


private:
    string nombre;
    string contrasena;
    bool privilegios[5]; //array de booleanos para definir que privilegios tiene o no el usuario
    
void SetPrivilegio(int pos, bool privilegio) {
    this->privilegios[pos] = privilegio;
}

bool IsPrivilegio(int pos) const {
    return privilegios[pos];
}

void SetContrasena(string contrasena) {
    this->contrasena = contrasena;
}

string GetContrasena() const {
    return contrasena;
}

void SetNombre(string nombre) {
    this->nombre = nombre;
}

string GetNombre() const {
    return nombre;
}
    
};
