#include <iostream>

using namespace std;    

template <class T> class Columna {
private:
    string nombre;
    //hash_map <string, Dato>;
    int pesoColumna;//dato cada dato aumenta el peso de la columna
    T tipoColumna;//Columna de tipo int o string
    
public:
    Columna() {
        
    }
    
    ~Columna() {
    }

    void SetTipoColumna(T tipoColumna) {
        this->tipoColumna = tipoColumna;
    }

    T GetTipoColumna() const {
        return tipoColumna;
    }

    void SetPesoColumna(int pesoColumna) {
        this->pesoColumna = pesoColumna;
    }

    int GetPesoColumna() const {
        return pesoColumna;
    }

    void SetNombre(string nombre) {
        this->nombre = nombre;
    }

    string GetNombre() const {
        return nombre;
    }
    
};