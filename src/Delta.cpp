//============================================================================
// Name        : Delta.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, An-style
//============================================================================

#include <iostream>
#include <string>
#include<fstream>
#include"TravelBookingSystem.h"
#include "OrderedLinkedList.h"
#include "Passenger.h"
using namespace std;

string header="A(Add) | S (Search) | D(Delete) |L(List) |Q(Quit):   ";
void print_seperator();
bool checkFlightNumber(int a);
char choice;	//  user input
string name;
string lastname;
string address;
string phonenumber;
int flightnumber;
bool trigger=1;

int main(){
    TravelBookingSystem bookSys;
	while (trigger) {
		cout<<header<< endl;
		cin>>choice;
		switch(choice){
						case 'A':
						case 'a':
							cout<< "Enter your flight number (100, 200, 300 or 400)\n"; cin>> flightnumber;
							if (checkFlightNumber(flightnumber)){
							cout << "Enter a Name \n"; cin >> name;
							cout << "Enter SurName \n"; cin >> lastname;
							cout << "Enter Pnone Number \n"; cin >> phonenumber;
							cout << "Enter your address.."; cin>> address;\

						    Passenger p(name, lastname, phonenumber, address) ;
						    bookSys.addPassenger(flightnumber,p);
						    cout<< "Delta.cpp line 51"<< p.getFirstName()<<p.getLastName()<< endl; // debugging statement
						    cout<<"Delta.cpp line 52"<< endl;										// debugging statement
							}
							else{
								cout << "Invalid flight Number";
//								cout<<header<< endl;
//										cin>>choice;
							}
							break;
						case 'S':
						case 's':
							cout << "Enter a Name \n"; cin >> name;
							cout << "Enter SurName \n"; cin >> lastname;
							bookSys.search(name, lastName);  // to be searched by Passenger p in OrderedLinkedList or  name /last name in passenger
							break;
						case 'D':
						case 'd':
							cout << "Enter a Name \n"; cin >> name;
							cout << "Enter SurName \n"; cin >> lastname;


							break;
						case 'L':
						case 'l':

							cout<< "Enter your flight number (100, 200, 300 or 400)\n"; cin>> flightnumber;
							bookSys.listPassenger(flightnumber);

							break;

						case 'Q':
						case 'q':
							cout<<"Thanks for using the Delta Air Line Booking System";
							trigger=0;
							break;
						default:
							cout<< "Invalid input";// throwing an error
							break;
					}
			print_seperator();
	}
	return 1;
}


 // Prints a seperator line
void print_seperator(){
	cout << "-------------------------------------- \n";
}
// This function checks the flight number is valid (100, 200, 300, 400)
bool checkFlightNumber(int number){
	 int checklist[4]= { 100, 200, 300, 400};
	 for (int i=0; i<4; i++){
		 if (checklist[i] == number){
			 return true;
		//if(number%100 && 99< number && number< 401){
		break;

		}
}
return false;
}
