/*
1.  Create a doubly linked list with at least five nodes using a
class template with template methods
a.  Print the linked list
2.  Add a copy & move constructor and overloaded copy &
move assignment operator to the linked list. Create a
linked list object list_moved_to for testing the move
operations
a.  Test the copy constructor and the copy assignment
operator
b.  Test the move constructor and the move assignment
operator
3.  Read the linked list from part 1 and create another linked
list reversing the logical order of the first linked list
a.  Print the linked list
4.  Delete the third node of each list. (Also try to (1) delete a
non-existent node and (2) delete from an empty list)
a.  Print both linked lists
5.  Add a node in the middle of each linked list
a.  Print both linked lists
6.  Repeat steps 1-4 using doubles
7.  Run valgrind to test for memory leaks

Use a unique pointer (rather than a raw pointer) data member to
represent ownership of linked list’s set of nodes. Use unique
pointer when implementing node struct to link nodes together.

Develop and test the copy constructor and overloaded copy
assignment operator.

Develop and test the move constructor and overloaded move
assignment operator (as needed). Move operations must be
noexcept.

Sample printout (similar output for doubles):

Part 1:
Linked list 1:  88 78 62 143 60

Part 2:
Linked list 1 copy constructor:  88 78 62 143 60
Linked list 1 copy assignment:  88 78 62 143 60
Linked list_moved_to copy constructor:  data moved from
Linked list_moved_to assignment:  data moved from

Part 3:
Linked list 2:  60 143 62 78 88

Part 4 (after deleting the third node):
Linked list 1:  88 78 143 60
Linked list 2:  60 143 78 88

Part 5 (after adding a node in the middle of the list):
Linked list 1:  88 78 70 143 60
Linked list 2:  60 143 70 78 88

Part 6 – Repeat Part 1 thru 5 using doubles

Part 7 – Run valgrind memory leak check

Implement an ordered singly (or doubly) linked list class
(suggested name listOrdered). This time linked nodes are stored
internally in ascending order. Perform operations 1 thru 5 as
outlined above using listOrdered.
*/

#include "doublyLinkedList.h"

int main()
{
    cout << "Part 1:" << endl;
}