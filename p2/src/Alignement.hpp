#ifndef Alignement_H
#define Alignement_H

#include <iostream>
#include <string>

using namespace std;

class Alignement
{
	
public:
	Alignement();
	~Alignement();
	int getScore();
	void update();
	void removeHead();
	void removeTail();
	//void addHead(char a, char b);
	void addTail(char a, char b);
	unsigned int size;
	char trou;
	int Score;
	string s1;
	string s2;
	
};

ostream& operator<<(ostream& sortie, Alignement const& a)
{
  sortie << a.s1 << endl << a.s2 << endl;
  return sortie;
}

#endif	
