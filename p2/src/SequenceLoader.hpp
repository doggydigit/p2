#ifndef SEQUENCELOADER_H
#define SEQUENCELOADER_H

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class SequenceLoader
{
	
public:
	SequenceLoader();
	virtual ~SequenceLoader();
	void load(string s);
	vector<string> sequence;
	
};

#endif
