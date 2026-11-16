#include "Responsable.h"

Responsable::Responsable(string nom, double s, int nbr) :Employe(nom, s)
{
	this->nbrSub = nbr;
	this->T = new Employe * [this->nbrSub];
	for (int i = 0; i < this->nbrSub; i++) {
		T[i] = nullptr;
	}
}

void Responsable::afficher() const {
	this->Employe::afficher();
	for (int i = 0; i < this->nbrSub; i++) {
		this->T[i]->afficher();
	}
}

void Responsable::ajouterEmploye(Employe* E)                           
{
	if (this->nbrSubMax > this->sub && !E) {
		this->T[this->nbrSub] = E;
		this->nbrSub++;
	}
	else {
		cout << "Impossible d'ajouter L'employee" << endl;
	}
}

Responsable::~Responsable() {
	delete[] this->T;
}