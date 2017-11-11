/*
 * Passenger.cpp
 *
 *  Created on: Oct 20, 2017
 *      Author: Anis
 */

#include "Passenger.h"
#include<iostream>
#include<string>
using std::string;
using namespace std;

Passenger :: Passenger(){
}

Passenger :: Passenger(string firstName, string lastName, string phoneNumber, string address){
 setFirstName(firstName);
 setLastName(lastName);
 setPhoneNumber(phoneNumber);
 setAddress(address);
 cout<< "your Passenger is created"; // debugging statement
}

string Passenger :: getFirstName()const{
	return this->firstName;
}
string Passenger :: getLastName() const{
	return this-> lastName;
}
string Passenger :: getPhoneNumber() const{
	return this-> phoneNumber;
}
string Passenger :: getAddress() const{
	return this-> address;
}
void Passenger :: setFirstName(string firstName){
	this->firstName=firstName;
}
void Passenger :: setLastName(string lastName){
	this->lastName=lastName;
}
void Passenger :: setPhoneNumber(string phoneNumber){
	this->phoneNumber=phoneNumber;
}
void Passenger :: setAddress(string address){
	this->address=address;
}
void Passenger :: printPassenger(const Passenger& p){

	cout << p.getFirstName();
}
void Passenger :: searchPassenger(string firstName, string lastName){

// under construction !
}


// operator>
// overloaded >: true if current object is > parameter, otherwise false

bool Passenger :: operator > (const Passenger& str1) const {
	//if (str1.getLastName.compare(str2.getLastName) < 0)

	//if (strcmp(str1.getLastName, str2.getLastName)){}// Case 1
return 1;
}
bool Passenger :: operator < (const Passenger& str1) const {
 return 1;
}
bool Passenger :: operator == (const Passenger& str1) const {
return 1;
}
 ostream & operator << (ostream & os, Passenger & p){
	os<< p.getFirstName();
	os<< p.getLastName();
	cout<< p.getLastName();
	return os;
 }
Passenger  :: ~ Passenger(){

}
