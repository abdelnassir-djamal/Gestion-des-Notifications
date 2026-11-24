#pragma once
#include<iostream>
using namespace std;
class Notification
{
protected:
	string destinataire;
	string message;
public:
	Notification(string, string);
	void afficher() const;
	virtual void envoyer() const = 0;
	~Notification();
};

