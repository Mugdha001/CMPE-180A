#include "RandomNumberBucket.h"
 
RandomNumberBucket::RandomNumberBucket() //default constructor
{	
	bucket.resize(39);
	my_range=39;
	for (int i = 1; i <= 39; i++)
	{
		bucket[i]=i;
	}	
}

RandomNumberBucket::RandomNumberBucket(int range) //parametrized constructor
{
	bucket.resize(range);
	my_range=range;
	for (int i = 1; i <= range; i++)
	{
		bucket[i]=i;
	}	
}

int RandomNumberBucket :: pop()
{	
	if(bucket.size()){
		int temp;
		srand(time(0));
		int size = bucket.size();
		int r = rand() % size;  // generate a random position
		temp = bucket[r];
		bucket.erase (bucket.begin()+ r);
		return temp;
		}
	else return -1;
}

int RandomNumberBucket :: size()										//return size of bucket
{
	return bucket.size();		
}

bool RandomNumberBucket :: empty()										//return true if bucket size is 0 else false 
{
	empty_bucket= (!bucket.size());
	return empty_bucket;
	
}

void RandomNumberBucket :: refill()
{
	if(empty_bucket)
	{	bucket.resize(my_range);
		for (int i = 1; i <= my_range; i++)		bucket[i] = i;
	}
}
