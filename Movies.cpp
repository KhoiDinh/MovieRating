//inputs: n,m,r
//output:name, mpaa_rating, invalid_counter, average, number of ratings in each catergory
//cpp that has the methods for the movies class

#include "stdafx.h"     // only for Microsoft Visual Studio C++ programs
#include "Movies.h"
#include <iostream>
using namespace std;


Movies::Movies() // sets varaibles equal to start values
{
	name = "";
	MPAA_rating ="";
	rating = 0;
	counter = 0;
	total = 0;
	// ratings for movie
	 terrible = 0; //1
	 bad = 0;//2
	 ok = 0;//3
	good = 0;//4
	great = 0;//5
	invalid_counter = 0;//keeps track of invalid input amount

}
Movies::Movies(string n, string M) // methods needed for movie class
{
	setName(n);
	set_MPAA_rating(M);
	rating = 0;
	counter = 0;
	total = 0;
	// ratings for movie
	terrible = 0; //1
	bad = 0;//2
	ok = 0;//3
	good = 0;//4
	great = 0;//5
	invalid_counter = 0;//keps track of invalid input amount
	
}

void Movies::setName(string n)// sets movie name
{
	name = n;
}
string Movies::getName() // gets movie name
{
	return name;
}
void Movies::set_MPAA_rating( string M)// sets mpaa rating
{
	MPAA_rating = M;
}
string Movies::get_MPAA_rating()// gets mpaa rating
{
	return MPAA_rating;
}
void Movies::addRating(int r) // adds rating
{
	// ratings for movie
	
	
	
	counter++;// keeps track of rating amount
	if (r >= 1 && r <= 5)// only takes in certain raitings
	{
		// adds ratings to counter depending on the number
		if (r == 1)
		{
		
			terrible++;
		}
		else if (r == 2)
		{
			bad++;
		}
		else if (r == 3)
		{
			ok++;
		}
		else if (r == 4)
		{
			good++;
		}
		else
		{
			great++;
		}
	}
	else
	{
		r = 0;
		invalid_counter++;
		
	}
	total = total + r;// combines all ratings
}
double Movies::getAverage()// gets average rating and  get the number of ratings from each catergory
{
	rating = total; // sets ratings equal to total
	// outputs the number of ratings
	cout << "Terrible(1): " << terrible << endl;
	cout << "Bad(2): " << bad << endl;
	cout << "OK(3): " << ok << endl;
	cout << "Good(4): " << good << endl;
	cout << "Great(5): " << great << endl;
	if (invalid_counter > 0)
	{
		cout << "There are " << invalid_counter << " rating inputs that are invalid and are set to 0." << endl;
		cout << "Check the ratings you are adding." << endl;
	}
	double average = 0;
	average = rating / counter;
	return average;// output average rating
	
	
}
