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
this->mpPassengerlist[indexFinder(flightnumber)].insert(p);
 cout<< "your passenger is added to " << indexFinder(flightnumber) << " index of the Array"<< endl;	 // Debugging print statement
}

void TravelBookingSystem :: numberValidator(int flightnumber){

}
void TravelBookingSystem :: removePassenger(string firstname,string lastname){

}
// this function was used to print the passenger object
// Another function listPassenger is providing the same output
//void TravelBookingSystem :: printFlight(int flightnumber){
//	cout<< "Under Construction"; // Debugging print statement
//
//    cout<<mpPassengerlist[indexFinder(flightnumber)];
//
//}
string TravelBookingSystem :: searchPassenger(string firstname, string lastname){

}

void TravelBookingSystem :: listPassenger(int flightnumber){

	cout<<mpPassengerlist[indexFinder(flightnumber)];
}
// a function to find the index of array of orderedLinkedLists
// index is according to the flight number from 0-3 (flight number is either 122, 200, 300, 400

int TravelBookingSystem :: indexFinder(int flightnumber){
	return flightnumber/100-1;
}
