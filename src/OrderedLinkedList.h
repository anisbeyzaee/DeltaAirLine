/*
 * OrderedLinkedList.h
 *
 *  Created on: Oct 20, 2017
 *      Author: Anis
 */

#ifndef ORDEREDLINKEDLIST_H_
#define ORDEREDLINKEDLIST_H_
#include "LinkedList.h"   // to be renamed
#include <iostream>

template <class T>
class OrderedLinkedList  : public LinkedList<T> {
	using LinkedList<T> :: head;
	using LinkedList<T> :: isEmpty;
	using LinkedList<T> :: inserFirst;
	using LinkedList<T> :: inserLast;
	public:
		void insert(T& item);
		void search(T& item);
};
	// Override to the method
	// THis method finds the right spot for any item adding to the node
template <class T>
void OrderedLinkedList<T> :: insert(T& item){
	if (isEmpty()) {
		inserFirst(item); // case 1
		cout << "inserting firstElement into the node by order"<< endl;
		return;
	}
	node<T>* prev = head;
	node<T>* curr = head->next;
	while ( curr != NULL){
		if (item > prev->data && item < curr->data){   // case 2
			node<T>* newNode=new node<T>;				// to be a helper method by itself for future...
			newNode->data = item;
			prev-> next = newNode;
			newNode ->next = curr;
			return ;
		}
		prev = curr;
		curr = curr ->next;

	}
	inserLast(item);	//case 3


}
template <class T>
void OrderedLinkedList<T> :: search(T& item){
	node<T>* searchitem = nullptr;
	node<T>* temp = head;
	node<T>* current = head;
	 while ( current->data < item-> data)
{
		    temp = current;
		    current = current->next;
		    }
		    if (current != NULL)
		    {
		        searchitem = current;
		        current = current->next;
		        cout << searchitem << endl;
		    }
		    else
		    {
		        cout << "Passenger not found";
		    }
		}

//if (isEmpty())
//	cout<< "No Passenger recorded yet"<< endl;
//else {
//
//	node<T>* curr = head;
//	while (!item > curr->data){
//		if (item == curr->data)
//			cout << curr->data;
//		else{ curr=curr->next;
//	}
//}
//		}
//}



#endif /* ORDEREDLINKEDLIST_H_ */
//  I will rewrite methods add fist and add last with no code in it so user can not insert in a front of an ordered linked list
