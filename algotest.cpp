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
