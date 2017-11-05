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
		inserFirst(item); 		// case 1
		return;
	}
	node<T>* prev = head;
	node<T>* curr = head->next;
	while ( curr != NULL){
		if (item > prev->data && item < curr->data){   // case 2
			node<T>* newNode=new node<T>;				// to be a helper method by itself ...
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
	void OrderedLinkedList<T>::search(T& item){

		}




#endif /* ORDEREDLINKEDLIST_H_ */
//  I will rewrite methods add fist and add last with no code in it so user can not insert in a front of an ordered linked list
