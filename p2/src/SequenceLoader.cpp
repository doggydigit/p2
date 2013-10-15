#include "SequenceLoader.hpp"
#include <fstream>

SequenceLoader::SequenceLoader(){}

SequenceLoader::~SequenceLoader(){}

void SequenceLoader::load(string s)
{
	string newseq;
	ifstream entree(s.c_str());
	if(entree.fail())
	{
		newseq = s;
	}else{
		while(!entree.eof())
		{
			entree >> newseq;
		}
		entree.close() ;
	}
	sequence.push_back(newseq);
}
