#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>

using namespace std;

bool isPermutation(string, string);

int main()
{
   string test_str1 = "the quick brown fox jumped over the lazy log";
   string test_str2 = "eht kciuq xof nworb revo depmuj yzal eht gol";

   if ( isPermutation(test_str1, test_str2) )
   {
      cout << test_str1 << " is a permutation of " << test_str2 << endl;
   }
   else
   {
      cout << test_str1 << " is NOT a permutation of " << test_str2 << endl;
   }
   
   return 0;
   
}

bool isPermutation(string str1, string str2)
{
   // Permutations have the same length, same characters, and same number of each character

   unordered_map<char, int> char_count;

   if ( str1.size() != str2.size() )
   {  
     cout << "Strings have different sizes" << endl;
      return false;
   }

   for (auto &c : str1)
   {
      auto search = char_count.find(c);
      if (search != char_count.end())
      {
         search->second++;
      }
      else
      {
  	    char_count.emplace(make_pair(c, 1));
      }
   }

   for (auto &elem : char_count)
   {
      char test = elem.first;
      int count = 0;
      for (string::size_type i = 0; i < str2.size(); i++)
      {
        if (test == str2[i]) 
        {
           count++;
        }
      }

      //cout << "Found " << count << " instances of " << test << endl;
      if (elem.second != count)
      {
         return false;
      }
   }

   return true; 
}
