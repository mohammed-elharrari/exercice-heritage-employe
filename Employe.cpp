#include "Employe.h"

int Employe::compt = 0;
float Employe::val = 0;
Employe::Employe(string nom, double indice):matricule(++compt)
{
	this->nom = nom;
	this->indice = indice;
}

void Employe::afficher() const
{
	cout << "nom" << this->nom << endl;
	cout << "matricule" << this->matricule << endl;
	cout << "salaire" << calculesalaire() << endl;

}

 double Employe::calculesalaire()const
{
	 cin >> Employe::val;
	return this->indice+(this->indice* Employe::val)/100;
}

 Employe::~Employe()
 {
 }
