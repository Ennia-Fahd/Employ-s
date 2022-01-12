#pragma once
#include "Employe.h"
#include <iostream>
class Commercial: public Employe
{
private:
	int nbr_vente;
public:
	Commercial(string nom, string prenom, float indice, int nbr_vente);
	Commercial(const Commercial& C);
	float Salaire() const override;
	void Modif_vente();
	~Commercial();
};
