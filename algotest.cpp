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
		cout<<"i1 = "<<index1<<" i2 = "<<index2<<endl;
		while((index1 != index2) || (index1 <= 2*s1.size()) || (index2 <= s2.size()))
		{
			if (index1 <= s1.size()) //suppress
			{	
				cout<<"suppress !"<<endl;
				cout<<"a before = "<<endl<<a<<endl;
				a.addback('-',s2[index2]);
				++index2;
				cout<<"a after = "<<endl<<a<<endl;
				f(a,s1,s2,index1,index2,maxscore, resultat);
			}	
			if (index2 <= s2.size()) //insert
			{
				cout<<"insert !"<<endl;
				cout<<"a before = "<<endl<<a<<endl;
				a.addback(s1[index1], '-');
				++index1;
				cout<<"a after = "<<endl<<a<<endl;
				f(a,s1,s2,index1,index2, maxscore, resultat);	
			}
			if(index1 <= s1.size() && index2 <= s2.size()) //substitute
			{	
				cout<<"substitute !"<<endl;
				cout<<"a before = "<<endl<<a<<endl;
				a.addback(s1[index1],s2[index2]);
				++index1;
				++index2;
				cout<<"a after = "<<endl<<a<<endl;
				f(a,s1,s2,index1,index2, maxscore, resultat);
			}
		cout<<"-----"<<endl;
		}
		if(index1 == s1.size() == index2 == s2.size())
		{
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
		
			cout<<a<<endl<<"_______________"<<endl;
			cout<<endl;
		}
	}

int main() {
	string a("AC");
	string b("GA");
	cout<<a<< " vs "<<b<<endl;
	Alignement A;
	vector<Alignement> x;
	f(A,a,b,0,0,0,x);

return 0;
}
