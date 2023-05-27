#pragma once
#include <iostream>
#include "birdlist.h"
#include "bird.h"
using namespace std;

class Birdfile : Birdlist { //birdfile ärver från birdlist som ligger i filen birdlist.h
	//ansvarar för att hålla en lista med fåglar för en enskild fil, alltså hålla koll på alla inlästa filer med dess fåglar.
	// ska ha observator och datum osv. 
	// skapar ett birdlist-objekt för varje 
public:
	string author;
	string date;
	Birdfile(); // default constructor
	Birdfile(string auth, string date); //konstruktor för att skapa observatör
	//vector <Bird>listsave; // behöver jag denna? 

	void appendToList(Bird b);
	string toString();

};