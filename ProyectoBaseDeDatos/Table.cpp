#include <iostream>
#include <Columna.cpp>
#include <hash_map>

using namespace std;

class Table {
private:
    string nombre;
    Columna LLavePrincipal;
    //hash_map <string, Columna>;
    int peso;//peso del table;
public:
    Table(const Table& orig) {
    }

    ~Table() {
    }

    void SetNombre(string nombre) {
        this->nombre = nombre;
    }

    string GetNombre() const {
        return nombre;
    }

    void SetLLavePrincipal(Columna LLavePrincipal) {
        this->LLavePrincipal = LLavePrincipal;
    }

    Columna GetLLavePrincipal() const {
        return LLavePrincipal;
    }
    
    
    
    int aumentaPeso(){
        
        return 0;
    }

    void SetPeso(int peso) {
        this->peso = peso;
    }

    int GetPeso() const {
        return peso;
    }
};



