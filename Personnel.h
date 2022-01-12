#pragma once
#include "Employe.h"
#include "Responsable.h"
#include "Commercial.h"
class Personnel : public Responsable
{private : 
	
	
public:
	Personnel(string nom, string prenom, float indice,string titre);
	float verser_salaire();
	~Personnel();
};
