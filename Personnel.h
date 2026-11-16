#pragma once
#include "Employe.h"
class Personnel
{
	Employe** employes;
	int nbremploye;
	int cap;
public:
	Personnel(int nb, int cap);
	void ajouter(Employe* e);
	double calculerTotalSalaires() const;
	~Personnel();
};

