#pragma once
#include<iostream>
using namespace std;
class Employe
{
private:
	int mat;
	string nom, prenom;
	float indice_sal;
	static int cpt ;
	static float val;

public: 
	Employe(string nom, string prenom, float indice);
	Employe(const Employe& E);
	virtual void Affichage() const;
	virtual float Salaire() const;
	~Employe();


};
