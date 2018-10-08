#include "RandomNumberSet.h"
#include <cstdlib>   // for srand and rand
#include <ctime>     // for time		
#define INTBIT 32 // 1 byte i.e. 8*4=32 bits per integer

void RandomNumberSet::initialize() //initialize function
{	srand(time(NULL));
	set_num=5;
	
	while(set_num){	
	int intrandom = rand() % set_range + 1;  // generate a random position
	cout << "random no" << intrandom <<endl;
	bitset<INTBIT> b_int(intrandom);
	bitlist.push_back(b_int);
	set_num--;
	}
}
RandomNumberSet::RandomNumberSet() //default constructor
{	
	set_range = 39;
	initialize();	
}

RandomNumberSet::RandomNumberSet(int range) //parametrized constructor
{
	if(range<5){
		cerr << "The program requires minimum 5 numbers" << endl;
		exit(1);
	}
	 set_range=range;
	 initialize();
}

void RandomNumberSet :: reset()
{
	bitlist.clear();
	set_num=5;
	while(set_num){
		bitset<INTBIT> b_int(0);
		bitlist.push_back(b_int);
		set_num--;
	}
}
bool RandomNumberSet :: set(int i)
{
	bitset<INTBIT> b_int(i);
	if (std :: find( bitlist.begin(),bitlist.end(),b_int ) !=bitlist.end()){
		return false;
	}
	else{
		/*if(bitlist.size()<5)
		{
			bitlist.push_back(b_int);
		}
		if(bitlist.size() ==5){
			bitlist[4] = b_int;
		}*/
		return true;
	}	
}

int RandomNumberSet :: size()
{
	return bitlist.size();
}
