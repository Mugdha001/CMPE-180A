Define a header and implementation file for the class RandomNumberBucket().
The class must be initialized with a bucket containing numbers from 1 to 39 if the default constructor is called.
Non default constructor takes an integer N as argument and that means that the bucket will contain then numbers 1-N.
The class must implement a pop() method that will return a number chosen at random from the bucket.
Once the number is returned in pop it must be extracted from the bucket.
Once the bucket is drained of all numbers pop should return -1.
The class must support the class refill that will replenish the numbers from 1-N when called.
You class must never reach a state where a number is replicated in the bucket.
The random() unix function should be obtained to select the numbers and srandom() must be called at class initialization
time to seed the random number generator with the current time that will prevent the program from always returning the same random numbers.
Remeber you will turn TWO and only two files: RandomNumberBucket.h and RandomNumberBucket.cpp.
Our automated program will compile and use your class to run the test cases.
Also implement method popWithRefill() which will check if the bucket is empty and 
refill before returning (i.e. a pop method that never fails).
Also implement the empty() method that returns true if the bucket is empty and needs to be refilled.

All the numbers in the bucket should have equal probability of being returned.

class RnadomNumberBucket {

public:

    RandomNumberBucket();

    RandomNumberBucket(int range);

    int pop(); // return -1 if empty

    void refill();

    int size(); // Number of elements left

    bool empty(); // whether empty or not

private:

   // Whatever you deem necessary 

}
