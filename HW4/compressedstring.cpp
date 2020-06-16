/*
 * CSS501 HW #4: String Reversal
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/28 - fall quarter
 *
 * This is cpp file for the CompressedString class. The constructor, decompress function and the operator overload <<. 
 * Limitation: The program cannot process numbers in the string due to a better efficiency in string compression. 
 *
 * Compression - O(n^2)
 * Decompression - O(n^2)
 *
 */

#include <iostream>
#include <string>
#include <vector>
#include "compressedstring.h"
using namespace std;


CompressedString::CompressedString(string word) // The constructor accepts a word and compresses it into characters
{
	decompressed = word; // Sets the word to the decompressed word
	char temp = word[0]; // Sets the char temp to the first letter of the word
	int counter = 0; // Initializes and assigns a counter to 0
	for (unsigned int i = 0; i < word.length(); i++) // For loop that traverses the word as an array
	{
		if (temp == word[i])
		{
			counter++; // Adds 1 to counter
		}
		else
		{
			if (counter > 2)
			{
				compressed.push_back(counter + 48); // Pushes the counter as char + 48 (ASCII number adjustment) into the vector
				compressed.push_back(temp); // Pushes the temp into the vector
				temp = word[i]; // Sets the temp to the next char in the word
				counter = 1; //Resets the counter to 1
			}
			else // counter <= 2
			{
				for (int i = 0; i < counter; i++) // for loop that loops for letters less than or equal to 2
				{
					compressed.push_back(temp); // pushes the letters into the vector
				}
				temp = word[i]; // sets temp to the next letter in the word
				counter = 1; // resets the counter to 1
			}
		}
	}

	// Fencepost algorithm for the last repeated letter 
	if (counter > 2)
	{
		compressed.push_back(counter + 48); // Pushes the counter as char + 48 (ASCII number adjustment) into the vector
		compressed.push_back(temp); // Pushes the temp into the vector
	}
	else
	{
		for (int i = 0; i < counter; i++) // for loop that loops for letters less than or equal to 2
		{
			compressed.push_back(temp); // pushes the letters into the vector
		}
	}

	double decompressLength = decompressed.length(); // Initializes and assigns decompressLength to the length of the decompressed word
	double compressLength = compressed.size(); // Initializes and assigns compressLength to the length of the compressed word
	double percent = (decompressLength - compressLength) / decompressLength * 100.0;
	
	cout << "Compressing " << this->decompressed << " . . . " << endl; // Prints out a prompt
	cout << *this << endl; // Prints out the word compressed
	cout << "The string was compressed from " << decompressLength << " letters to " << compressLength << " letters." << endl; // Prints out the statistics
	cout << "The string was compressed by " << percent << " percent. \n" << endl; // Prints out the percent compression
}

void CompressedString::decompress()
{
	cout << "Decompressing " << *this << " . . . " << endl; // Prints out a prompt
	string decompressedWord = ""; // Creates a string that accepts the generated decompressed letters
	for (unsigned int i = 0; i < compressed.size(); i++) // For loop that goes through the vector
	{	
		if (compressed[i] >= 48 && compressed[i] <= 57) // Checks if the char is a number
		{
			int number = compressed[i] - 48; //converts the char into its equivalent int
			for (int j = 0; j < number; j++) // for loop that generates the repeated letters
			{
				decompressedWord += compressed[i + 1]; // Concatenates the letters generated into the string
			}
			i++; // Skips the next char
		}
		else // The next char is not a number
		{
			decompressedWord += compressed[i]; // Prints out the char
		}
	}
	cout << decompressedWord << "\n" << endl;

}

ostream &operator<< (ostream &out, const CompressedString &word)
{
	for (int i = 0; i < word.compressed.size(); i++) // For loop that traverses through the vector
	{
		out << word.compressed[i]; //Prints out the vector
	}
	return out;
}