#include "Commercial.h"
Commercial::Commercial(string n, double i, double t,double v)
    : Employe(n, i) {
    this->ventes = v=0;
    this->inter = t;
};

void Commercial::modifierVentes(double v) {
    ventes = v;
};

double Commercial::calculesalaire()const  {
    return Employe::calculesalaire() + ventes * inter;
};
Commercial::~Commercial() {
};