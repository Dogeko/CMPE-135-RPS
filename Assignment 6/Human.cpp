#include "Human.h"

int Human::getChoice()
{
	return choice;
}

void Human::setChoice(int value)
{
	choice = value;
}

void Human::playerPick()
{
	cout << "1 = Block, 2 = Charge, 3 = Fireball ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		setChoice(0);
		break;
	case 2:
		setChoice(1);
		charges = charges + 1;
		break;
	case 3:
		setChoice(2);
		charges = charges - 1;
		break;
	case 4:
		setChoice(4);
		charges = charges - 3;
		cout<<"Karate Chop used \n"<<endl;
		break;
	default:
        playerPick();
		break;
	}
}
