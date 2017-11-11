/*
 * Reserve.h
 *
 *  Created on: Oct 22, 2017
 *      Author: Anis
 */
 // TravelBooking System is in charge of operations regarding the booking system such as adding, deleting and listing passengers
#ifndef TRAVELBOOKINGSYSTEM_H_
#define TRAVELBOOKINGSYSTEM_H_


#include <iostream>
#include <string>

#include "OrderedLinkedList.h"
#include "Passenger.h"

using namespace std;

class TravelBookingSystem {
public:
	TravelBookingSystem();

		void numberValidator(int flightnumber);
		void removePassenger(string firstname,string lastname);
		void addPassenger(int flightnumber, Passenger& p);
		string searchPassenger(string firstname, string lastname);
		void listPassenger(int flightnumber);
		int indexFinder(int flightnumber);
		void printFlight(int flightnumber);
private :
		OrderedLinkedList<Passenger> *mpPassengerlist; 	// a list of passengers
};

#endif /* TRAVELBOOKINGSYSTEM_H_ */
