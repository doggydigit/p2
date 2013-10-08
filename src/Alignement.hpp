#ifndef Alignement_H
#define Alignement_H

#include <iostream>

using namespace std;

class Alignement
{
	
public:
	Alignement();
	~Alignement();
	int getScore();
	void removeHead();
	void removeTail();
	void addHead(char a, char b);
	void addTail(char a, char b);
	unsigned int size();

private:
	int Score;
	char trou;
	string s1;
	string s2;
	
};

#endif	
