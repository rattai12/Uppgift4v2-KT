#pragma once
#include <iostream>
#include <vector>
#include "birdlist.h"
#include "birdfile.h"

using namespace std;


class Bird {
public:
	string fageltyp;
	string svenskfagel;
	string latinfagel;
	int observation;

	string author;
	string date;
	
	Bird();
	 
	 Bird(string type, string sv, string lat, int obs) {
		 fageltyp = type;
		 svenskfagel = sv;
		 latinfagel = lat;
		 observation = obs;
	 } // konstruktor

		 
		
	~Bird(); // destructor

	
};





