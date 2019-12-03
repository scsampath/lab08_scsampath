#include "linkedListFuncs.h"
#include "recLinkedListFuncs.h"
#include "strFuncs.h"
#include "tddFuncs.h"
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  if(argc < 2) {
    std::cerr << "Usage: " << argv[0] << " [num of test to run]" << std::endl;
    return 1;
  }else {
    int testNum = atoi(argv[1]);
    if (testNum == 1) {

      START_TEST_GROUP("IS_PALINDROME");

      string s1 = "reverse";
      string s2 = "rever";
      string s3 = "nope";
      string s4 = "adaaada";

      ASSERT_EQUALS(0, isPalindrome(s1));
      ASSERT_EQUALS(1, isPalindrome(s2));
      ASSERT_EQUALS(0, isPalindrome(s3));
      ASSERT_EQUALS(1, isPalindrome(s4));

    } else if (testNum == 2) {

      START_TEST_GROUP("IS_ANAGRAM");
      
      string a1 = "drity";
      string a2 = "dirty";
      string a3 = "dormitoy";
      string a4 = "dirty room";

      ASSERT_EQUALS(1, isAnagram(a1,a2));
      ASSERT_EQUALS(0, isAnagram(a3,a4));
    }
  }
  
  return 0;
}
