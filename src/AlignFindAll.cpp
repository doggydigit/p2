#include "AlignFindAll.hpp"

#include <iostream>
#include <vector>

using namespace std;

class AlignFindAll {

public:
	//constructeur
	AlignFindAll();
	virtual ~AlignFindall();

	vector<string> twoSequences;
	SubstitutionMatrix subMa;
	EditionTable edTable;
	vector<Alignement> alignements;

	//algorithm
	badbadnotgood(string, string);


}
