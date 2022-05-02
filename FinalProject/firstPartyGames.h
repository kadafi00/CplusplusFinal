#pragma once
#include "Games.h"
#include <string>
#include <iostream>

using namespace std;

// Child class (Derived Class)
class firstPartyGames :
    public Games
{
private:
    string developer;
    string platform;
    
public:
    firstPartyGames(string gameName, string gameGenre, int yearReleased, string developer, string platform): Games(gameName, gameGenre, yearReleased), developer(developer), platform(platform) {

    }
    void gameDevInfo() {
        cout << this->name << " was developed by: " << developer << " " << "and was released on " << platform << endl;
    }
};

