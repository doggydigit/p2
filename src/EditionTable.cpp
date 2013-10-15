#include "EditionTable.hpp"

EditionTable::EditionTable(string s1, string s2, SubstitutionMatrix SM, int penalite)
{
	
}

EditionTable::~EditionTable(){}



s1 s2
int scoremax(0);
int maxlength(2 * s1.size());
f(s1 s2, n){
++n

	


	void f(Alignement a, string s1, string s2, int index1, int index2)
	{
		if(index1 != s1.size() && index2 != s2.size())
		{
			if (index1 != s1.size())
			{	
				a.addTail('-',s2[index2]);
				++index2;
				f(a,s1,s2,index1,index2);
			}	
			if (index2 != s2.size())
			{
				a.addTail(s1[index1]);
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
			int x = a.getScore;
			if(x > maxscore)
			{
				maxscore = x;
				resultat.clear();
				resultat.push_back(a);
			}else if(x == maxscore)
			{
				resultat.push_back(a);
			}
		}
	}
				 
		
		
		
		
