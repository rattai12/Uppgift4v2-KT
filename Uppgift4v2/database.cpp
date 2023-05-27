#include <iostream>
#include "database.h"
#include <string>
#include <fstream>
#include "birdfile.h"
#include <sstream>

using namespace std;


Database::Database()
{
	this->birdFiles = {};
}

void Database::readFromFile(string filename)
{
	Birdfile file;
	ifstream infile(filename); 
	string line;
	while (getline(infile, line)) {
		int counter = 0;
		istringstream kss(line);

		if (counter == 0) {
			string author, date;
			getline(kss >> ws, author, ',');
			getline(kss >> ws, date, ',');
			file = Birdfile(author, date);
			counter++;
		}
		else {
			string type, svenskfagel, latinfagel;
			int observationer;
			getline(kss >> ws, type, ','); //getline l�ser varje rad och plockar ut varje del i structen. G�r en �vning f�r att plocka ur med hj�lp av substring och find. 
			getline(kss >> ws, svenskfagel, ','); // iss >> ws, tar bort f�rsta whitespace, s� att f�rsta bokstaven l�ses.
			getline(kss >> ws, latinfagel, ',');
			kss >> observationer;
			
			//Bird fagel(type, svenskfagel, latinfagel, observationer); //f�rst tar jag ut i en variabel f�r att sedan "skicka" in i constructorn. 
			file.appendToList(Bird(type, svenskfagel, latinfagel, observationer));
		}
	}
	this->birdFiles.push_back(file);
}

string Database::toString()
{
	//for(int i = 0; i < this->birdFiles.size() - 1; i++)


	return this->birdFiles[0].author + "; " + this->birdFiles[0].date + "; " + this->birdFiles[0].toString();
}
