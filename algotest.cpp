#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Alignement
	{
		public:
			Alignement(){}
			~Alignement(){}
			int getScore()
				{
					return 42;
				}

			void addback(char a, char b)
				{
					s1.push_back(a);
					s2.push_back(b);
				}

			int Score;
			string s1;
			string s2;
		
};

ostream& operator<<(ostream& sortie, const Alignement & a)
	{
		sortie << a.s1 << endl << a.s2;
		return sortie;
	}

//void f(Alignement a, string s1, string s2, int index1, int index2)
void f(Alignement a, string s1, string s2, int index1, int index2, int maxscore=0, vector<Alignement> resultat = {0})
	{
		if(index1 != s1.size() && index2 != s2.size())
		{
			if (index1 != s1.size()) //suppress
			{	
				a.addback('-',s2[index2]);
				++index2;
				f(a,s1,s2,index1+1,index2,maxscore, resultat);
			}	
			if (index2 != s2.size()) //insert
			{
				a.addback(s1[index1], '-');
				++index1;
				f(a,s1,s2,index1,index2, maxscore, resultat);	
			}
			if(index1 != s1.size() && index2 != s2.size()) //substitute
			{	
				a.addback(s1[index1],s2[index2]);
				++index1;
				++index2;
				f(a,s1,s2,index1,index2, maxscore, resultat);
			}
		
		}
		else{
			int x = a.getScore();
			if(x > maxscore)
			{
				maxscore = x;
				resultat.clear();
				resultat.push_back(a);
			}else if(x == maxscore)
			{
				resultat.push_back(a);
			}
		
			cout<<a<<endl;
			cout<<endl;
		}
	}

int main() {
	string a("AA");
	string b("AA");
	Alignement A;
	vector<Alignement> x;
	f(A,a,b,0,0,0,x);

return 0;
}
