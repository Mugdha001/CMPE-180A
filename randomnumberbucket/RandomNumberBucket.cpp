#include "RandomNumberBucket.h"
#include <ctime>
 
void RandomNumberBucket::initialize() //initialize function
{	
	bucket.resize(my_range);
	for (int i = 0; i < my_range; i++)
	{
		bucket[i]=i+1;
	}	
}
RandomNumberBucket::RandomNumberBucket() //default constructor
{	
	my_range = 39;
	initialize();	
}

RandomNumberBucket::RandomNumberBucket(int range) //parametrized constructor
{
	 my_range=range;
	 initialize();
}

int RandomNumberBucket :: pop()
{	
	if(bucket.size()){
		int popped;
		srand(time(0));
		int size = bucket.size();
		int r = rand() % size;  // generate a random position
		popped = bucket[r];
		bucket.erase (bucket.begin()+ r);
		return popped;
		}
	else return -1;
}

int RandomNumberBucket :: popWithRefill()
{	
	if(bucket.size())
	{
		int popped;
		srand(time(0));
		int size = bucket.size();
		int r = rand() % size;  // generate a random position
		popped = bucket[r];
		bucket.erase (bucket.begin()+ r);
		return popped;
		}
	else{
		initialize();
		int popped;
		srand(time(0));
		int size = bucket.size();
		int r = rand() % size;  // generate a random position
		popped= bucket[r];
		bucket.erase (bucket.begin()+ r);
		return popped;
		}
}

int RandomNumberBucket :: size()										//return size of bucket
{
	return bucket.size();		
}

bool RandomNumberBucket :: empty()										//return true if bucket size is 0 else false 
{
	return (!bucket.size());
}

void RandomNumberBucket :: refill()
{
	initialize();	
}
