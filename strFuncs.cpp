//Sachen Sampath
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */

//converts char to lowercase char
char toLower(char c1)
{
	if (c1 <= 'Z' && c1 >= 'A'){
        	return c1 - ('Z' - 'z');
	}
   	return c1;	
}

bool isAnagram(string s1, string s2) {
	int c1[26] = {0};
	int c2[26] = {0};
	for (int i = 0; i < s1.length(); i++) {
		s1[i] = toLower(s1[i]);
		if (s1[i] >= 'a' && s1[i] <= 'z') {
			c1[s1[i] - 97]++;
		}
	}
	for (int i = 0; i < s2.length(); i++) {
		s2[i] = toLower(s2[i]);
		if (s2[i] >= 'a' && s2[i] <= 'z') {
			c2[s2[i] - 97]++;
		}
	}
	bool returnval = true;
	for (int i = 0; i < 26; i++)
	{
		if (c1[i] != c2[i])
		{
			returnval = false;
			break;
		}
	}
	return returnval;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1) {
	if (s1.length() == 0 || s1.length() == 1)
	{
		return true;
	}
	if (tolower(s1.front()) == tolower(s1.back()))
	{
		return isPalindrome(s1.substr(1,s1.length() - 2));
	}
	return false;
}



