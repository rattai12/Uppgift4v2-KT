#pragma once
#include <iostream>
#include "birdlist.h"
#include "bird.h"
using namespace std;

class Birdfile : Birdlist { //birdfile �rver fr�n birdlist som ligger i filen birdlist.h
	//ansvarar f�r att h�lla en lista med f�glar f�r en enskild fil, allts� h�lla koll p� alla inl�sta filer med dess f�glar.
	// ska ha observator och datum osv. 
	// skapar ett birdlist-objekt f�r varje 
public:
	string author;
	string date;
	Birdfile(); // default constructor
	Birdfile(string auth, string date); //konstruktor f�r att skapa observat�r
	//vector <Bird>listsave; // beh�ver jag denna? 

	void appendToList(Bird b);
	string toString();

};