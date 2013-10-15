#ifndef ALIGNFINDALL_H
#define ALIGNFINDALL_H

#include "Alignement.hpp"
#include <iostream>
#include <vector>
using namespace std;

class AlignFindAll
{
	
public:
	AlignFindAll(string a1, string a2);
	virtual ~AlignFindAll();
	vector<Alignement> alignements;
	void f(Alignement a,unsigned int index1 = 0,unsigned int index2 = 0);
	
private:
	int maxscore;
	string s1;
	string s2;
	
};

#endif
