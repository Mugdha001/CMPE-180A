#include <iostream>														
#include <vector>														
#include <cstdlib>   // for srand and rand
#include <ctime>     // for time													
using namespace std;

class RandomNumberBucket
{
private:
    int my_range;
    vector <int> bucket;   
 
public:
    RandomNumberBucket();
    RandomNumberBucket(int range);

    int pop(); // return -1 if empty

    void refill();

    int size(); // Number of elements left

    bool empty(); // whether empty or not
};
 
int main(){
	//int range;
	RandomNumberBucket bucket1(0);
	//RandomNumberBucket bucket2(50);
	int popped_number = bucket1.pop();
	//cout << popped_number << endl;
	int current_size = bucket1.size();
	cout << current_size <<endl;
	bool a = bucket1.empty();
	cout <<  a;
	bucket1.refill();
	//int size();
	//bool empty();
	
	return 0;
}

RandomNumberBucket::RandomNumberBucket() //default constructor
{
	my_range=40;
	for (int i = 1; i < 40; i++)
	{
		bucket.push_back(i);
	}	
}

RandomNumberBucket::RandomNumberBucket(int range) //parametrized constructor
{
	my_range=range;
	for (int i = 1; i <= range; i++)
	{
		bucket.push_back(i);
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
			//cout << size << "\t " << temp <<endl;
		return temp;
		}
	else return -1;
}

int RandomNumberBucket :: size()
{
	return bucket.size();
}

bool RandomNumberBucket :: empty()
{
	return (bucket.size());
}

void RandomNumberBucket :: refill()
{
	cout << "\n" << my_range << "\tHi"<< endl;
	cout << bucket.empty() << "\tHello\n";
	if(bucket.empty())
	{
		for (int i = 1; i <= my_range; i++)
		bucket.push_back(i);
	}
}
