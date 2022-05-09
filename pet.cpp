#include <iostream>
#include <string>

using namespace std;
string name; // creates variable for pet name to be stored as string
enum hunger { fed, peckish, hungry, starving, dead }; // creates all possible states for pets hunger levels
hunger currentState = hungry; // states current hunger level
enum tiredness { wide, awake, tired, falling, collapsed }; // creates all possible states for pets tiredness levels
tiredness current = awake; // states current tiredness level
char input; // creates variable to store user input as a character
int hungerhappy = 0;
int tiredhappy = 0;
int happinesslevel = 0;



string petname() // function for naming pet
{

	char option;

	cout << "Would you like to name your pet, Y or N" << endl;
	cin >> option; // stores user input as Y or N

	if (option == 'Y') // if statement to determine pet name by user input
	{
		cout << "Enter your pets name" << endl;
		cin >> name;
	}
	else
	{
		name = "your pet";
	}
	return name;
}


int petstate() //function to determine pets hunger levels
{

switch (currentState) // creates different output for different hunger levels
{

case fed:
	cout << name << " is well-fed!" << endl;
	break;
case peckish:
	cout << name << " is feeling peckish" << endl;
	break;
case hungry:
	cout << name << " is feeling hungry" << endl;
	break;
case starving:
	cout << name << " is starving" << endl;
	break;
case dead:
	cout << name << " has died because you did not feed him" << endl;
	break;

}

return currentState;

}

int feed() // function to feed pet
{
	cout << "Press F to feed " << name << endl;
	cin >> input;



	if (input == 'F')
	{

		switch (currentState) // changes state of pet after pet has been fed
		{
		case fed: cout << name << " is full and cannot be fed!" << endl;
			break;
		case peckish: cout << name << " has been fed!" << endl;
			currentState = fed;
			break;
		case hungry: cout << name << " has been fed!" << endl;
			currentState = peckish;
			break;
		case starving: cout << name << " has been fed!" << endl;
			currentState = hungry;
			break;
		case dead: cout << name << " is dead, you cannot feed him!" << endl;
			break;

		}

	}
	else

	{
		switch (currentState) // changes state of pet after pet has not been fed
		{
		case fed: cout << name << " has not been fed" << endl;
			currentState = peckish;
			break;
		case peckish: cout << name << " has not been fed" << endl;
			currentState = hungry;
			break;
		case hungry: cout << name << " has not been fed" << endl;
			currentState = starving;
			break;
		case starving: cout << name << " has not been fed" << endl;
			currentState = dead;
			break;
		case dead: cout << name << " is already dead" << endl;
			break;


		}
	}
	return currentState;
}

int sleepState()
{
	switch (current)
	{
	case wide:
		cout << name << " is wide awake!" << endl;
		break;
	case awake:
		cout << name << " is awake" << endl;
		break;
	case tired:
		cout << name << " is feeling tired" << endl;
		break;
	case falling:
		cout << name << " is falling asleep!" << endl;
		break;
	case collapsed:
		cout << name << " has collapsed from lack of sleep!" << endl;
		break;
	}

	return current;
}

int sleep() // function to put pet to sleep
{
	cout << "Press S to make " << name << " have a nap" << endl;
	cin >> input;



	if (input == 'S')
	{

		switch (current) // changes state of pet after pet has been for a nap
		{
		case wide: cout << name << " is wide awake and can't sleep anymore!" << endl;
			break;
		case awake: cout << name << " has had a nap!" << endl;
			current = wide;
			break;
		case tired: cout << name << " has had a nap!" << endl;
			current = awake;
			break;
		case falling: cout << name << " has had a nap" << endl;
			current = tired;
			break;
		case collapsed: cout << name << " has collapsed because you didn't put him to sleep!" << endl;
			break;

		}

	}
	else
	{
		switch (current) // changes state of pet after pet has not been put to sleep
		{
		case wide: cout << name << " has not had a nap" << endl;
			current = awake;
			break;
		case awake: cout << name << " has not had a nap" << endl;
			current = tired;
			break;
		case tired: cout << name << " has not had a nap" << endl;
			current = falling;
			break;
		case falling: cout << name << " has not had a nap" << endl;
			current = collapsed;
			break;
		case collapsed: cout << name << " has already collapsed because he did not have a nap" << endl;
			break;


		}
	}
	return current;
}

int tiredhappylevel()
{
	switch (current)
	{
	case wide: tiredhappy = 4;
		break;
	case awake: tiredhappy = 3;
		break;
	case tired: tiredhappy = 2;
		break;
	case falling: tiredhappy = 1;
			break;
		case collapsed: tiredhappy = 0;
	}
	return tiredhappy;
}

int hungerhappylevel()
{
	switch (currentState)
	{
	case fed: hungerhappy = 4;
		break;
	case peckish: hungerhappy = 3;
		break;
	case hungry: hungerhappy = 2;
		break;
	case starving: hungerhappy = 1;
		break;
	case dead: hungerhappy = 0;
		break;
	}
	return hungerhappy;
}

int happiness()
{
	happinesslevel = hungerhappy + tiredhappy;
	switch (happinesslevel)
	{
	case 8: cout << "Extremely Happy!" << endl;
		break;
	case 7: cout << "Very Happy!" << endl;
		break;
	case 6: cout << "Happy" << endl;
		break;
	case 5: cout << "Feeling Ok" << endl;
		break;
	case 4: cout << "Quite Unhappy" << endl;
		break;
	case 3: cout << "Very Unhappy" << endl;
		break;
	case 2: cout << "Terribly Unhappy" << endl;
		break;
	case 1: cout << "Miserable" << endl;
		break;
	}
	return happinesslevel;
}

int update()
{
	switch (currentState)
	{
	case fed: cout << name << " is now feeling well fed!" << endl;
		break;
	case peckish: cout << name << " is still feeling peckish!" << endl;
		break;
	case hungry: cout << name << " is still hungry!" << endl;
		break;
	case starving: cout << name << " is now starving!" << endl;
		break;
	case dead: cout << name << " is now dead!" << endl;
		break;
	}
	switch (current)
	{
	case wide: cout << name << " is now feeling wide awake!" << endl;
		break;
	case awake: cout << name << " is now feeling awake but could still sleep a little more!" << endl;
		break;
	case tired: cout << name << " is still feeling tired and needs more sleep!" << endl;
		break;
	case falling: cout << name << " is still falling asleep and needs more sleep!" << endl;
		break;
	case collapsed: cout << name << " has collapsed because he did not get sleep!" << endl;
		break;

	}
	return 0;
}

int main()
{

				petname();
				petstate();
				feed();
				sleepState();
				sleep();
				happiness();
				update();
			system("pause");
}