#include <string>
#include <iostream>

using namespace std;

bool isCharsUnique(string str);
bool isCharsUnique_comp(string str);
bool isCharsUnique_bitvec(string str);

int main()
{
   string input;

   cout << "Enter a string: ";
   cin >> input;

   if (isCharsUnique_bitvec(input)) {
      cout << "All unique chars!\n";
   } else {
      cout << "Non-unique chars detected\n";
   }

   return 0;
}

bool isCharsUnique(string str)
{
   bool bit_char[128];
   int i = 0;
   int val;


   for (int i = 0; i < 128; i++)
   {
      bit_char[i] = false;
   }

   for (char c : str)
   {
      val = str.at(i++);
      cout << "Char: " << c << " Value: " << val << endl;
      if (bit_char[val]) return false;
      bit_char[val] = true;
   }
   
   return true;
}

bool isCharsUnique_comp(string str)
{
   for (int i = 0; i < str.length(); i++)
   {
      char test = str.at(i);
      cout << "Test char: " << test << endl;
      for (int j = i + 1; j < str.length(); j++)
      {
         if (test == str.at(j)) return false;
      }
   }

   return true;
      
}

bool isCharsUnique_bitvec(string str)
{
   int val;
   int checker = 0;
   for (int i = 0; i < str.length(); i++)
   {
      val = str.at(i) - 'a';
      if (checker & (1 << val)) return false;
      cout << "Val: " << val << " Checker: " << checker << endl;
      checker |= (1 << val);
   }

   return true;
}
