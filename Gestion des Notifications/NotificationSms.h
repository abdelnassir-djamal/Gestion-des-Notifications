#pragma once
#include "Notification.h"
class NotificationSms : public Notification
{
private:
	string operateur;
	string numero;
public:
	NotificationSms(string, string, string);
	void afficher() const;
	void envoyer() const override;
	~NotificationSms();

};

