#ifndef EDITIONTABLE_H
#define EDITIONTABLE_H

#include <iostream>
#include "SubstitutionMatrix.hpp"

class EditionTable
{
	
public:
	EditionTable(string s1, string s2, SubstitutionMatrix SM, int penalite);
	virtual ~EditionTable();

private:

};

#endif
