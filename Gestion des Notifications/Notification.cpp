#include "Notification.h"

Notification::Notification(string destinataire, string message)
{
	this->destinataire = destinataire;
	this->message = message;
}

void Notification::afficher() const
{
	cout << "destinataire est:" << this->destinataire << endl;
	cout << "message est:" << this->message << endl;
}

Notification::~Notification()
{
	cout << "destructeur de la classe Notification" << endl;
}
