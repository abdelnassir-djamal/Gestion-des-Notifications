#include "NotificationEmail.h"

NotificationEmail::NotificationEmail(string destinataire, string message, string objet):Notification(destinataire,message)
{
	this->objet = objet;
}

void NotificationEmail::afficher() const
{
	cout << "EMAIL|A:" << this->destinataire
		<< "|objet:" << this->objet
		<< "|Message:" << this->message << endl;
}

void NotificationEmail::envoyer() const
{
	this->afficher();
}

NotificationEmail::~NotificationEmail()
{
	cout << "destructeur de la classe NotificationEmail" << endl;
}
