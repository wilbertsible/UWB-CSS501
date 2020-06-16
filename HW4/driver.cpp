/*
 * CSS501 HW #4: String Compression
 * Wilbert Lim Sible
 * wsible@uw.edu
 * 2018/10/28 - fall quarter
 *
 * This is the driver program for the CompressedString class where the string compression function was tested using a short
 * word and a long word. 
 */

#include <iostream>
#include <vector>
#include "compressedstring.h"

using namespace std;

int main()
{
	CompressedString shortWord("abc");
	shortWord.decompress();
	CompressedString longWord("aaaaadddddeeeeffwwwwazwww");
	longWord.decompress();
	
	system("pause");
}