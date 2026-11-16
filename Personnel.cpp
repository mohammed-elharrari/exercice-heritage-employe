#include "Personnel.h"
#include<iostream>
using namespace std;

Personnel::Personnel(int nb, int cap)
{
    this->cap = cap;
    this->nbremploye =nb= 0;
    this->employes = new Employe * [this->cap];
    for (int i = 0; i < this->nbremploye; i++) {
        employes[i] = nullptr;
    }
}

void Personnel::ajouter(Employe* e)
{
    if (this->nbremploye < this->cap && !e) {
        this->employes[this->nbremploye] = e;
        this->nbremploye++;
    }
    else {
        cout << "Impossible d'ajouter un employe" << endl;
    }
}

double Personnel::calculerTotalSalaires() const
{
    double total = 0.0;

    for (int i = 0; i < this->nbremploye; i++) {
        total += this->employes[i]->calculerSalaire();
    }

    return total;
}
Personnel::~Personnel() {
    delete[] employes;
}