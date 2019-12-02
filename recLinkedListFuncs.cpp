#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) {
  int sum = 0;
  if(head -> next == 0)
  {
	sum += head->data;
  }
  if(head -> next)
  {
  	head = head -> next;
  	recursiveSum(head);
  }

}

//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {

  return -42;
}
