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

string s3 = s1.insert()
f(s3,s2,n)
string s4 = s1.supress()
f(s4,s2,n)		
string s5 = s1.substitute)
f(s5,s2,n)
	
	
		
		

	string insert(Alignement a, string s1, string s2, int index1, int index2)
	{
		a.addback('-',s2[index2]);
		++index2;
	}
	
	void f(Alignement a, string s1, string s2, int index1, int index2)
	{
		if(index1 != s1.size() && index2 != s2.size())
		{
			if (index1 != s1.size())
			{	
				a.addback('-',s2[index2]);
				++index2;
				f(a,s1,s2,index1,index2);
			}	
			if (index2 != s2.size())
			{
				a.addback(s1[index1]);
				++index1;
				f(a,s1,s2,index1,index2);	
			}
			if(index1 != s1.size() && index2 != s2.size())
			{	
				a.addback(s1[index1],s2[index2]);
				++index1;
				++index2;
				f(a,s1,s2,index1,index2);
			}
		
		}else{
			int x = getscore(a);
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
				 
		
		
		
		
