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

	while (trigger) {
		cout<<header<< endl;
		cin>>choice;
		switch(choice){
						case 'A':
						case 'a':
							cout<< "Enter your flight number\n"; cin>> flightnumber;
							if (checkFlightNumber(flightnumber)){
							cout << "Enter a Name \n"; cin >> name;
							cout << "Enter SurName \n"; cin >> lastname;
							cout << "Enter Number \n"; cin >> phonenumber;
							cout << "Enter your address.."; cin>> address;
							Passenger p(name, lastname, phonenumber, address);
							}
							else{
								cout << "Invalid flight Number";
							}
							break;
						case 'S':
						case 's':
							cout << "Enter a Name \n"; cin >> name;
							cout << "Enter SurName \n"; cin >> lastname;
							break;
						case 'D':
						case 'd':
							cout << "Enter a Name \n"; cin >> name;
							cout << "Enter SurName \n"; cin >> lastname;


							break;
						case 'L':
						case 'l':
							cout<< "Enter your flight number\n"; cin>> flightnumber;


							break;

						case 'Q':
						case 'q':
							cout<<"Thanks for using the PhoneList";
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
// This function checks the flight number to be valid
bool checkFlightNumber(int number){
		if(number==100 || 200 || 300 || 400){
		return true;
		}else{
	return false;}
}
