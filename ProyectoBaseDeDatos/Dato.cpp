#include <iostream>

using namespace std;

template <class T> class Columna {
private:
    T tipoDeDato;//string o int
    int anchoDato;
public:
    
    Columna(const Columna& orig) {
    }

    ~Columna() {
    }

    void SetAnchoDato(int anchoDato) {
        this->anchoDato = anchoDato;
    }

    int GetAnchoDato() const {
        return anchoDato;
    }

    void SetTipoDeDato(T tipoDeDato) {
        this->tipoDeDato = tipoDeDato;
    }

    T GetTipoDeDato() const {
        return tipoDeDato;
    }
};
