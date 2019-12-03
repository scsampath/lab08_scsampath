#include "linkedListFuncs.h"
#include "recLinkedListFuncs.cpp"
#include "strFuncs.cpp"
#include "tddFuncs.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  if(argc < 2) {
    std::cerr << "Usage: " << argv[0] << " [num of test to run]" << std::endl;
    return 1;
  }else {
    int testNum = atoi(argv[1]);
    if (testNum == 1) {

      START_TEST_GROUP("RECURSIVE_SUM_OF_LINKED_LIST");

      int highestFirst[3]={73,57,61};
      LinkedList *list1 = arrayToLinkedList(highestFirst,3);
      int highestSecond[3] = {-7, -4, -11};
      LinkedList* list2 = arrayToLinkedList(highestSecond,3);
      int highestLast[4] = {1,2,3,4};
      LinkedList* list3 = arrayToLinkedList(highestLast,4);
      int tied[3] = {1,3,3};
      LinkedList* list4 = arrayToLinkedList(tied,3);
	    
      ASSERT_EQUALS(191, recursiveSum(list1));
      ASSERT_EQUALS(-22, recursiveSum(list2));
      ASSERT_EQUALS(10, recursiveSum(list3));
      ASSERT_EQUALS(7, recursiveSum(list4));


    } else if (testNum == 2) {

      START_TEST_GROUP("RECURSIVE_LARGEST_VALUE_OF_LINKED_LIST");

      int highestFirst[3]={73,57,61};
      LinkedList *list1 = arrayToLinkedList(highestFirst,3);
      int highestSecond[3] = {-7, -4, -11};
      LinkedList* list2 = arrayToLinkedList(highestSecond,3);
      int highestLast[4] = {1,2,3,4};
      LinkedList* list3 = arrayToLinkedList(highestLast,4);
      int tied[3] = {1,3,3};
      LinkedList* list4 = arrayToLinkedList(tied,3);

      ASSERT_EQUALS(73, recursiveLargestValue(list1));
      ASSERT_EQUALS(-4, recursiveLargestValue(list2));
      ASSERT_EQUALS(4, recursiveLargestValue(list3));
      ASSERT_EQUALS(3, recursiveLargestValue(list4));

    }    
  } 
  
  return 0;
}
