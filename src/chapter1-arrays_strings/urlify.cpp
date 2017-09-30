#include <iostream>
#include <string>

using namespace std;
string urlify(string, int);

int main()
{
	string input = "Misty and laoak dkjaldsf ";
	int true_length = input.length();

    cout << "Original string: " << input << endl;

	string urlified = urlify(input, true_length);

    cout << "Urlified string: " << urlified << endl;
}

string urlify(string input, int true_length)
{
	// replace ' ' with '%20' 
	// how much extra room is needed? 3x for each space for 
	int numspaces = 0;
	for (unsigned int i = 0; i < input.length(); i++)
	{
		if (input[i] == ' ')
		{
			numspaces++;
		}
	}

    cout << "Num spaces = " << numspaces << endl;   
    if (numspaces == 0)
    {
    	return input;
    }

	int index = true_length + numspaces*2;

    string urlified ;
    for (int i = 0; i < index; i++)
    {
    	urlified += " ";
    }
    
	for (int j = true_length - 1; j >= 0; j--)
	{
		//cout << "Input char: " << input[j] << endl;
		//cout << "Index: " << index << endl;
		if (input[j] == ' ')
		{
			urlified[index-1] = '0';
			urlified[index-2] = '2';
			urlified[index-3] = '%';
			index -= 3;			
		}
		else
		{
			urlified[index-1] = input[j];
			index--;
		}
		//cout << "Urlified string: " << urlified << endl;
	}

	return urlified;
}