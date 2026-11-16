#pragma once
#include "Employe.h"
class Commercial : public Employe {
private:
    double ventes;
    double inter;

public:
    Commercial(string n, double i, double t, double v);
    void modifierVentes(double v);
    double calculesalaire()const override;
    ~Commercial();
};

