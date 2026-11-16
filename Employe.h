#pragma once
#include <iostream>
using namespace std;
class Employe
{
protected:
	string nom;
		const int matricule;
		double indice;
		static float val;
		static int compt;

public:
	Employe(string, double);
	virtual void afficher()const;
	virtual double calculesalaire()const;
	~Employe();
};

