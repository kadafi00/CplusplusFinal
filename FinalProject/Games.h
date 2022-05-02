#pragma once
#include <string>
#include <iostream>

using namespace std;
// Parent class
class Games
{
protected:
	string name;
	string genre;
	int releasedIn;
	// Passing in protected var and initializing them
public:
	Games(string gameName, string gameGenre, int yearReleased): name(gameName), genre(gameGenre), releasedIn(yearReleased) {
		
	}

	void printGames() {
		cout << name << ", is a " << genre << ", and was released in " << releasedIn << endl;		
	}
};
