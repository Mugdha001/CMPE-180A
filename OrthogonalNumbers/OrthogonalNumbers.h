#ifndef ORTHOGONALNUMBERS_H
#define ORTHOGONALNUMBERS_H
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

class RandomNumberSet
{
private:
    int set_range;
    bitset<101> bitvector;
 
public:
    RandomNumberSet();											//default constructor
    RandomNumberSet(int range);  								//parametrized constructor

    void reset(); 												// reset elements

    int size(); 												// Number of elements left
    
    void elements();

    bool set(int i); 											// whether empty or not
    
	int operator-(const RandomNumberSet& random_obj) const;		// Overload - operator
    
    friend void operator<<(ostream& os, const RandomNumberSet& random_obj);  //overload << operator
    
};

class OrthogonalNumbers : public RandomNumberSet
{
private:
    int n, c, d, countnum=0;
    vector<RandomNumberSet> ortho;
    
 
public:
    OrthogonalNumbers();											//default constructor
    OrthogonalNumbers(int range, int set, int dis);  								//parametrized constructor

    bool reset(); 												// reset elements
    bool generate(int numbersOfRandomNumberSetsToGenerate);
   
    friend void operator<<(ostream& os, const OrthogonalNumbers& random_obj1);  //overload << operator
    
}; 
 
#endif
