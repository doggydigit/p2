#include "Alignement.hpp"

Alignement::Alignement(): trou('-'){}

Alignement::~Alignement(){}

int Alignement::getScore()
{
	return Score;
}

void Alignement::removeHead()
{
	s1.front.erase();
	s2.front.erase();
}

void Alignement::removeTail()
{
	s1.pop_back();
	s2.pop_back();
}

void Alignement::addHead(char a, char b)
{
	s1.insert(0,a);
	s2.insert(0,b);
}

void Alignement::addTail(char a, char b)
{
	s1.push_back(a);
	s2.push_back(b);
}

unsigned int Alignement:size()
{
	return s1.size();
}
