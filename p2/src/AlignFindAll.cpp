#include "AlignFindAll.hpp"

AlignFindAll::AlignFindAll(string a1, string a2): maxscore(0), s1(a1), s2(a2){}

AlignFindAll::~AlignFindAll(){}

void AlignFindAll::f(Alignement a,unsigned int index1,unsigned int index2)
{
	if(index1 != s1.size() && index2 != s2.size())
	{
		if (index1 != s1.size())
		{	
			a.addTail(a.trou,s2[index2]);
			++index2;
			f(a,index1,index2);
		}	
		if (index2 != s2.size())
		{
			a.addTail(s1[index1],a.trou);
			++index1;
			f(a,index1,index2);
		}
		if(index1 != s1.size())
		{	
			a.addTail(s1[index1],s2[index2]);
			++index1;
			++index2;
			f(a,index1,index2);
		}
	}else{
		a.update();
		if(a.getScore() > maxscore)
		{
			maxscore = a.getScore();
			alignements.clear();
			alignements.push_back(a);
		}else if(a.getScore() == maxscore)
		{
			alignements.push_back(a);
		}
	}
}



