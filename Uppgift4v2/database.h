#pragma once
#include <iostream>
#include <vector>
#include "birdfile.h"


using namespace std;

class Database { // ansvarar f�r att h�lla en lista med alla birdfile-objekt
public:
	vector<Birdfile> birdFiles;

	Database();


	void readFromFile(string filename);
	string toString();
};