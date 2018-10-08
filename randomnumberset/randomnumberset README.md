Student is to implement a RandomNumberSet class that will store 5 numbers in the range of 1 to N and number N may be passed at construction time. If default constructor is used N = 39.

The class must store using a bitset or multiple bitsets for efficient implementation of some of the required methods.

The class must support the following methods:

Default Constructor and constructor with range argument.

void reset(); // clears all the numbers stored

bool set(int i); // If number i is not in the set, stored by setting the corresponding bit in the bit set and return true, else return false

int size(); // returns numbers of numbers stored

Overload operator << so that the numbers can be printed out aligned to the right and in 3 spaces

Overload operator - so the difference between two RandomNumberSets can be determined in O(1)
