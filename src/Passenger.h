/*
 * Passaner.h
 *
 *  Created on: Oct 20, 2017
 *      Author: Anis
 */

#ifndef PASSENGER_H_
#define PASSENGER_H_
#include<iostream>
#include<string>

using namespace std;

class Passenger {

private:
	string firstName;
	string lastName;
	string phoneNumber;
	string address;
public:
	Passenger(); // default Constructor
	Passenger(string firstName, string lastName, string phoneNumber, string address);

 void setFirstName(string firstName);
 void setLastName(string lastName);
 void setPhoneNumber(string phoneNumber);
 void setAddress(string address);
 void printPassenger(const Passenger &) ;
 void searchPassenger(string firsName, string lastName);
  bool operator>(const Passenger &) const;       // is object > parameter?
  bool operator<(const Passenger &) const;       // is object < parameter?
  bool operator==(const Passenger &) const;      // is object == parameter?
string getFirstName()const;
string getLastName() const;
string getPhoneNumber() const;
string getAddress() const;

friend ostream & operator << (ostream & os, Passenger & p);
~ Passenger();
};

