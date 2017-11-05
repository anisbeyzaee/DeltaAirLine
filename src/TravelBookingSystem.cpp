#include <iostream>
#include <string>

#include "TravelBookingSystem.h"

using namespace std;

TravelBookingSystem :: TravelBookingSystem()
{
	mpPassengerlist = new OrderedLinkedList<Passenger> [4];
	for(int I = 0; I < 4; I++){
		OrderedLinkedList<Passenger> p;
		mpPassengerlist[I] = p;
	}
 }
void TravelBookingSystem :: addPassenger(int flightnumber, Passenger& p){
this->mpPassengerlist[flightnumber].insert(p);
}

void TravelBookingSystem :: numberValidator(int flightnumber){}

void TravelBookingSystem :: removePassenger(string firstname,string lastname){}
string searchPassenger(string firstname, string lastname){}

void TravelBookingSystem :: listPassenger(int flightnumber){}
int TravelBookingSystem :: indexFinder(int flightnumber){
	return flightnumber/100-1;
}
