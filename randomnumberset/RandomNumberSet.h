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
    RandomNumberSet();
    RandomNumberSet(int range);
    void initialize();

    void reset(); // reset elements

    int size(); // Number of elements left

    bool set(int i); // whether empty or not
    
    // Overload + operator to add two Box objects.
    int operator-(const RandomNumberSet& random_obj) const;
    //string operator<<(const RandomNumberSet& random_obj) const;
    friend void operator<<(ostream& os, const RandomNumberSet& random_obj);
    
};
 
#endif
