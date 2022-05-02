#include <iostream>
// Include Headers.h in order to define the functions
#include "Header.h"
#include "Games.h"
#include "firstPartyGames.h"

// Shouldn't be using this but am anyways
using namespace std;

// Function that takes in a string and int then passes by reference
void intro(string& name, int& year) {

    cout << "Hello, and welcome to my program. I wanted to show off a little bit of what I learned in this class" << endl;

    cout << "First, let's start by entering your name so I can refer to you as such later if needed " << endl;
    cin >> name;

    cout << "Next, why don't you enter what year of college you are in just for fun :) " << endl;
    cin >> year;

    cout << "Awesome " << name << "! So cool that you're on your " << year << "(st/nd/rd/th) year of college, keep it up!" << endl;
    cout << "Alrighty, let's get started showing off some cool stuff! \n\n" << endl;
}

// Function that creates an array, displays it with for loop & returns a char
char forLoop(string name) {
    cout << "First off, " << name << " let me show you how cool arrays and for loops can be.";
    cout << "Press y to generate a grid that uses for loops and arrays. Otherwise press n to exit the program." << endl;
    char selection;
    cin >> selection;
    if (selection == 'y') {
        int ary[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                ary[i][j] = 1;

                if (i == 1 && j == 1) {
                    ary[i][j] = 0;
                }
                cout << ary[i][j] << " ";
            }
            cout << endl;
        }
        cout << "So cool right?!\n\n" << endl;
    }
    else {
        cout << "Have a great day!" << endl;
        exit(0);
    }
    return selection;
}

// Function that passes in a pointer
void stringPointer(string* y) {
    *y = "So sorry, string y says try again next time =/";
}

// Function that returns a char
char pointers(string character) {
    cout << "Now pointers are a little tricky but they are also quite handy." << endl;
    cout << "In this example I'll show you how you can get two different strings through using pointers." << endl;
    cout << "Go ahead and press y to see this in action. Otherwise press n to exit the program." << endl;
    char selection;
    cin >> selection;
    if (selection == 'y') {
        // Print out different strings using pointers
        string y = "String y says congratulations!";
        cout << y << endl;
        stringPointer(&y);
        cout << y << endl;
        cout << "How nifty is that? By switching the memory address using pointers we were able to get two different " << endl;
        cout << "strings while only using the single var y." << endl;
        cout << "You can imagine how beneficial this might be when coding in C++. \n\n" << endl;
    }
    else {
        cout << "Have a wonderful day!" << endl;
        exit(0);
    }
    return selection;
}

// Function that passes in a pointer
void congrats(string* y) {

}


// Function that creates class objects and calls functions from parent and child classes
void games() {
    cout << "Now we're going to mess with classes a bit." << endl;
    cout << "I have created a seperate class file that stores some variables." << endl;
    cout << "Using that data we can create some objects, then print out the data relating to said object." << endl;
    Games gameObj1("Elden Ring", "ARPG", 2022);
    Games gameObj2("Ghostwire Tokyo", "First Person ARPG", 2022);
    cout << "Here are a couple of games that I'll call with the data I set up in the class file." << endl;
    gameObj1.printGames();
    gameObj2.printGames();
    cout << "Here is some more information about these games using a child, or derived class." << endl;
    firstPartyGames infoObj1("Elden Ring", "ARPG", 2022, "FromSoftware", "all platforms other than Switch");
    firstPartyGames infoObj2("Ghostwire Tokyo", "First Person ARPG", 2022, "Tango Gameworks", "PC & Playstation");
    infoObj1.gameDevInfo();
    infoObj2.gameDevInfo();
}