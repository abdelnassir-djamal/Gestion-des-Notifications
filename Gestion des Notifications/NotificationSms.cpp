#include "NotificationSms.h"

NotificationSms::NotificationSms(string operateur, string message, string num) :Notification(num, message)
{
	this->operateur = operateur;
}

void NotificationSms::afficher() const
{
	cout << "SMS|Numero:" << this->destinataire
		<< "|Operateur:" << this->operateur
		<< "|Message:" << this->message << endl;
}

void NotificationSms::envoyer() const
{
	this->afficher();
}

NotificationSms::~NotificationSms()
{
	cout << "destructeur de la classe NotificationSms" << endl;
}
