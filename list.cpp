#include "list.h"

class List::Node//only the list class can see the Node class
{
    public: //this isn't really 'public' public (see above)
	int data = 0; //default value
	Node* link = nullptr;//default value

};

void List::insert(int num, int k)//insert num at k-th position of list
{
    Node* newPtr = new Node{num};

    Node* iPtr = frontPtr;

    if (k == 1)
    {
	    newPtr->link = frontPtr;
	    frontPtr = newPtr;
	    return;
    }
	     
    for(int i = 1; i < k -1; i++)
	    iPtr = iPtr->link;

    newPtr = iPtr->link;
    iPtr->link = newPtr->link;


}
