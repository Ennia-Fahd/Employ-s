#pragma once
#include <Vector>
#include "Employe.h"

class Responsable : public Employe
{private:
	vector<Employe*> subordonnee;
	string titre;
public :
	Responsable(string nom, string prenom, float indice, string titre);
	Responsable(const Responsable& R);
	void add_subor(Employe& E);
	void remove_subor();
	void Affichage() const override;
	float Salaire_subor() const;
	~Responsable();
};
