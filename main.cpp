#include
#include


int main(int argc, char* argv[])
{
	SequenceLoader Chargeur;
	for(int i(1); i < argc; ++i)
	{
		Chargeur.load(argv[i])
	}
	
	
	return 0;
}
		
