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
bool isAnagram(string s1, string s2) {
	int c1[26];
	int c2[26];
	for (int i = 0; i < s1.length(); i++) {
		tolower(s1[i]);
		if (s1[i] >= 'a' && s1[i] <= 'z') {
			c1[s1[i] - 97]++;
		}
	}
	for (int i = 0; i < s2.length(); i++) {
		tolower(s1[i]);
		if (s2[i] >= 'a' && s2[i] <= 'z') {
			c2[s2[i] - 97]++;
		}
	}
	if (c1 == c2)
	{
		return true;
	}
	return false;
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



