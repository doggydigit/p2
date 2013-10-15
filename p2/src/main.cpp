#include "AlignFindAll.hpp"
#include "SequenceLoader.hpp"


int main(int argc, char* argv[])
{	
	SequenceLoader Chargeur;
	for(int i(1); i < argc; ++i)
	{
		Chargeur.load(argv[i]);
	}
	if(argc == 3){
		
		SequenceLoader Chargeur;
		for(int i(1); i < argc; ++i)
		{
			Chargeur.load(argv[i]);
		}
		
		AlignFindAll F(Chargeur.sequence[0], Chargeur.sequence[1]);
		Alignement a;
		F.f(a);
		unsigned int x= F.alignements.size();
		cout << "The best matches are:" << endl;
		for(unsigned int i(0); i < x; ++i)
		{
			cout << F.alignements[i];
		}
			
	}else{
		cout << "Please, enter the sequences you want to align" << endl;
	}
	
	return 0;
}
		
