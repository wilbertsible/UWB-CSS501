/*
 * CSS501 HW #4: String Compression
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/28 - fall quarter
 *
 * This is the interface for the CompressedString class where all the functions,  operator overload, and the parameters are listed.
 *
 */
#include <iostream>
#include <vector>
using namespace std;
#ifndef COMPRESSEDSTRING_H
#define COMPRESSEDSTRING_H

class CompressedString
{
	friend ostream &operator<< (ostream &out, const CompressedString &word); // Operator overload of the output stream that outputs the elements of the vector

private:
	string decompressed; // decompressed word
	vector<char> compressed; // vector that holds the characters of the compressed word
public:
	CompressedString(string word); // Constructor that compresses the string
	void decompress(); // function that decompresses the string

};
#endif