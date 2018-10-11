#ifndef RANDOMNUMBERSET_H
#define RANDOMNUMBERSET_H
#define INTBIT 32 // 
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class RandomNumberSet
{
private:
    int set_range;
    bitset<501> bitvector;
 
public:
    RandomNumberSet();											//default constructor
    RandomNumberSet(int range);  								//parametrized constructor

    void reset(); 												// reset elements

    int size(); 												// Number of elements left

    bool set(int i); 											// whether empty or not
    
	int operator-(const RandomNumberSet& random_obj) const;		// Overload + operator
    
    friend void operator<<(ostream& os, const RandomNumberSet& random_obj);  //overload << operator
    
};
 
#endif
