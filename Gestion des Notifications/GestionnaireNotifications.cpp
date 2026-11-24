#include "GestionnaireNotifications.h"

GestionnaireNotifications::GestionnaireNotifications():compteur(0)
{
}

void GestionnaireNotifications::ajouter(Notification* n)
{
	if (compteur < 100) {
		tab[compteur++] = n;
	}
	else {
		cout << "Tableau est plein:ajout impossible." << endl;
	}
}

void GestionnaireNotifications::envoyerToutes()
{
	for (int i = 0;i < compteur;i++) {
		tab[i]->envoyer();
	}
}

GestionnaireNotifications::~GestionnaireNotifications()
{
}
