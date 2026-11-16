#pragma once
#include "Employe.h"
class Responsable :
    public Employe
{
private:
    Employe** T;
    int nbrSub;
    int nbrSubMax;
    int sub;
public:
    Responsable(string, double, int);
    void afficher()const override;
    void ajouterEmploye(Employe* E);
    ~Responsable();
};

