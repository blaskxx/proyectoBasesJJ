#include <iostream>
#include <hash_map>

using namespace std;

class TableSpace {
private:
    string nombre;
public:
    TableSpace() {
    }

    ~TableSpace() {

    }
    
    bool crearTabla(){
    
    }
    
    void SetNombre(string nombre) {
        this->nombre = nombre;
    }

    string GetNombre() const {
        return nombre;
    }

};



