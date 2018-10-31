Using the classes defined in earlier projects create a new class called OrthogonalNumbers which has the following public methods:

Constructor that takes as argument the range or random numbers (1-N), the number of numbers to set in each RandomNumberSet generated, and the minimum distance between any two numbers to be generated.

OrthogonalNumbers(int n, int c, int d) { your contructing code; }

Default constructor must have 39 (n), 5 (c), 4 (d) as arguments.

bool generate(int numbersOfRandomNumberSetsToGenerate);

This function will generate numbersOfRandomNumberSetsToGenerate sets of random number such that all numbers generated are at a distance of d

bool reset(); //clears all random numbers generated if any

Must implement the << output that will print all the numbers one set per line.
