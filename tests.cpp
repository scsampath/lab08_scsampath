#include "linkedListFuncs.h"
#include "recLinkedListFuncs.cpp"
#include "strFuncs.cpp"
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

      START_TEST_GROUP("ANAGRAM");

      string s1 = "dirty room";
      string s2 = "dormitory";
      string s3 = "basket";
      string s4 = "teksa";
      ASSERT_EQUALS(1, isAnagram(s1,s2);
      ASSERT_EQUALS(0, isAnagram(s3,s4);
    } 
  
  return 0;
}
