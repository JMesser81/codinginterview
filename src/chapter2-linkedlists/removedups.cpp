#include <iostream>
#include <unordered_set>
#include "JList.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    JList<int> mylist;
    std::unordered_set<int> uniqueints;

    int n;
    cout << "Enter list elements (ints) - one per line. Ctrl-D to finish" << endl;
    while (cin >> n)
    {
        mylist.insert_front(n);
    }

    mylist.print();

    cout << "Removing duplicates..." << endl;

    // Iterate through list
    // Check uniqueints set to see if element already exists
    // if not exists, add it to the set and move forward
    // if exists, delete element

    // without extra space, this will require O(n^2) time - what about using two pointers?

    for (auto el : mylist)
    {
        if (uniqueints.end() == uniqueints.find(el.data)
        {
            uniqueints.insert(el.data)
        }
    }

    for (auto el : uniqueints)
    {
        mylist.delete(el);
    }
}