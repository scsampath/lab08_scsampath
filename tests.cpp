//Sachen Sampath
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
  } else {
    int testNum = atoi(argv[1]);
    if (testNum == 1) {
      //palindrome test
      START_TEST_GROUP("IS_PALINDROME");

      string s1 = "reverse";
      string s2 = "rever";
      string s3 = "nope";
      string s4 = "detartrated";

      ASSERT_EQUALS(0, isPalindrome(s1));
      ASSERT_EQUALS(1, isPalindrome(s2));
      ASSERT_EQUALS(0, isPalindrome(s3));
      ASSERT_EQUALS(1, isPalindrome(s4));

    } else if (testNum == 2) {
      //anagram test
      START_TEST_GROUP("IS_ANAGRAM");
      
      string a1 = "d i r t y";
      string a2 = "dirty";
      string a3 = "dormitory";
      string a4 = "dirty room";
      string a5 = "rabbit";
      string a6 = "dirt";
      string a7 = "nope";
      string a8 = "nop";

      ASSERT_EQUALS(1, isAnagram(a1,a2));
      ASSERT_EQUALS(1, isAnagram(a3,a4));
      ASSERT_EQUALS(0, isAnagram(a5,a6));
      ASSERT_EQUALS(0, isAnagram(a7,a8));
    } else if (testNum == 3) {
      //recursive sum test
      START_TEST_GROUP("RECURSIVE_SUM_OF_LINKEDLIST");
      
      int l1[3]={9,3,61};
      LinkedList *list1 = arrayToLinkedList(l1,3);
      Node* h1 = list1 -> head;
      int l2[3] = {-7, -10, -11};
      LinkedList* list2 = arrayToLinkedList(l2,3);
      Node* h2 = list2 -> head;
      int l3[4] = {1,2,3,0};
      LinkedList* list3 = arrayToLinkedList(l3,4);
      Node* h3 = list3 -> head;
      int l4[3] = {5,5,3};
      LinkedList* list4 = arrayToLinkedList(l4,3);
      Node* h4 = list4 -> head;

      ASSERT_EQUALS(73, recursiveSum(list1));
      ASSERT_EQUALS(-28, recursiveSum(list2));
      ASSERT_EQUALS(6, recursiveSum(list3));
      ASSERT_EQUALS(13, recursiveSum(list4));
    } else if (testNum == 4) {

      START_TEST_GROUP("RECURSIVE_LARGEST_VALUE_OF_LINKEDLIST");
      //recursive largest value test
      int l1[3]={9,3,61};
      LinkedList *list1 = arrayToLinkedList(l1,3);
      Node* h1 = list1 -> head;
      int l2[3] = {-7, -10, -11};
      LinkedList* list2 = arrayToLinkedList(l2,3);
      Node* h2 = list2 -> head;
      int l3[4] = {1,2,3,0};
      LinkedList* list3 = arrayToLinkedList(l3,4);
      Node* h3 = list3 -> head;
      int l4[3] = {5,-5,3};
      LinkedList* list4 = arrayToLinkedList(l4,3);
      Node* h4 = list4 -> head;

      ASSERT_EQUALS(61, recursiveLargestValue(h1));
      ASSERT_EQUALS(-7, recursiveLargestValue(h2));
      ASSERT_EQUALS(3, recursiveLargestValue(h3));
      ASSERT_EQUALS(5, recursiveLargestValue(h4));
    }
  }
  
  return 0;
}
