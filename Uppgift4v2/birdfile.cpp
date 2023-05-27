#include <iostream>
#include "birdfile.h"
#include "birdlist.h"
#include <fstream>
#include <sstream>
#include <string>
#include "bird.h"
#include <vector>
using namespace std;



Birdfile::Birdfile()
{
    this->author = "";
    this->date = "";
}

Birdfile::Birdfile(string auth, string date)
{
   
	
}

void Birdfile::appendToList(Bird b)
{
    this->theList.push_back(b);
}

string Birdfile::toString()
{
    string res = "";
    for (int i = 0; i < this->theList.size() - 1; i++)
    {
        res += this->theList[i].fageltyp + "\n";
    }
    return res;
}
