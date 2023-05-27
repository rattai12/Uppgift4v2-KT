#include <iostream>
#include "database.h"
#include "birdfile.h"

using namespace std;

int main() {
	Database databas;

	databas.readFromFile("f1.txt");

	cout << databas.birdFiles.size() << endl;
	cout << databas.toString() << endl;

	return 0;
}