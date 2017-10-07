#include <iostream>
#include <string>
#include <algorithm>
#include <bitset>

using namespace std;


void toggleBit(int pos, int &bitvec)
{
    cout << "Togging bit at " << pos << endl;
    
    int mask = 1 << pos;
    
    bool test = ( (bitvec & mask) >= 1) ? true : false;
    if (test)
    {
        bitvec &= ~mask;
    }
    else 
    {
        bitvec |= mask;
    }

    //cout << std::bitset<32>(bitvec) << endl;

}

int createBitVector(const string &s)
{

    int bitvec = 0;
    int a_val = (int)'a';
    //int z-val = (int)'z';

    int pos = 0;
    for (auto c : s)
    {
        pos = (int)c - a_val;
        toggleBit(pos, bitvec);
    }
    
    //cout << std::bitset<32>(bitvec) << endl;

    return bitvec;
}

bool isPalindromePermutation(const string &s)
{
    int bitvec = createBitVector(s);
    int bitveclessone = bitvec - 1;

    if ( (bitvec & bitveclessone) == 0)
    {
        return true;
    }
    
    return false;
    
}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        cout << "Usage: " << string(argv[0]) << " <phrase>" << endl;
        return 1;
    }

    string input = string(argv[1]);

    std::transform(input.begin(), input.end(), input.begin(), ::tolower);
    if (isPalindromePermutation(input))
    {
        cout << input << " is a palindrome permutation" << endl;
    } else
    {
        cout << input << " is not a palindrome permutation" << endl;
    }

    return 0;
}


