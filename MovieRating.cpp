//inputs: m1, m2
//output:m1.getname(); m2.getname(); m1.get_MPAA_rating(); m2.get_MPAA_rating(); m1.getAverage(); m2.getAverage()
//main class where outputs movie name, mpaa rating, and average rating

#include "stdafx.h"
#include <string>
#include <iostream>
#include "Movies.h"
using namespace std;

Movies m1; //empty constructor
Movies m2 = Movies("Jurassic World", "R");


int _tmain(int argc, _TCHAR* argv[])
{
	m1.setName("Avatar");// sets the name of the movie for m1
	m1.set_MPAA_rating("PG-13");//sets the mpaa rating of the movie for m1
	m1.addRating(2);// adds ratings for m1
	m1.addRating(2);
	m1.addRating(3);
	m1.addRating(4);
	m1.addRating(5);


	m2.addRating(1);//adds rating for m2
	m2.addRating(1);
	m2.addRating(1);
	m2.addRating(4);
	m2.addRating(5);

	cout << "Title: " << m1.getName() << endl;// gets title of m1
	cout << "MPAA Rating: " << m1.get_MPAA_rating() << endl; //gets mpaa rating for m1
	cout << "Average rating: " << m1.getAverage()<< endl; // gets average rating for m1


	cout << endl;
	cout << endl;
	cout << endl;

	
	cout << "Title: " << m2.getName() << endl; // gets title of m2
	cout << "MPAA Rating: " << m2.get_MPAA_rating() << endl; //gets mpaa rating of m2
	cout << "Average rating: " << m2.getAverage() << endl; // gets average rating of m2

	
	
	return 0;
}




