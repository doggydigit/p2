#include "AlignFindAll.hpp"

AlignFindAll::AlignFindAll(string a1, string a2): maxscore(0), s1(a1), s2(a2){}

AlignFindAll:: ~AlignFindall(){}

void AlignFindAll::f(Alignement a int index1, int index2)
{
	if(index1 != s1.size() && index2 != s2.size())
	{
		if (index1 != s1.size() && s2[index2] != a.trou)
		{	
			a.addTail(a.trou,s2[index2]);
			++index2;
			f(a,s1,s2,index1,index2);
		}	
		if (index2 != s2.size() && s1[index1] != a.trou)
		{
			a.addTail(s1[index1],a.trou);
			++index1;
			f(a,s1,s2,index1,index2);
		}
		if(index1 != s1.size() && index2 != s2.size())
		{	
			a.addTail(s1[index1],s2[index2]);
			++index1;
			++index2;
			f(a,s1,s2,index1,index2);
		}
	}else{
		a.update();
		if(a.getScore > maxscore)
		{
			maxscore = x;
			alignements.clear();
			alignements.push_back(a);
		}else if(x == maxscore)
		{
			alignements.push_back(a);
		}
	}
}



