#include "NotificationPush.h"

NotificationPush::NotificationPush(string message, string app, string user):Notification(user,message)
{
	this->application = app;
}

void NotificationPush::afficher() const
{
	cout << "PUSH|Utilisateur" << this->destinataire
		<< "|Application:" << this->application
		<< "|Message:" << this->message << endl;
}

void NotificationPush::envoyer() const
{
	this->afficher();
}

NotificationPush::~NotificationPush()
{
	cout << "destructeur de la classe NotificationPush" << endl;
}
