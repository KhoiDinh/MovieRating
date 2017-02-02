//inputs: none
//output: none
//header class used to create function name for Movies.cpp
#include <string>
using namespace std;

class Movies
{
public:
	Movies();// creates empty class
	Movies(string n, string M); // creates class with prameters within
	void setName(string n); // sets name 
	string getName(); // gets name
	void set_MPAA_rating(string M); // sets mpaa rating
	string get_MPAA_rating();// gets mpaa rating
	void addRating(int r); // adds rating to total ratings 
	double getAverage(); // gets average rating and  get the number of ratings from each catergory

private:
	string name; // name of movie
	string MPAA_rating; // mpaa rating of movie
	double rating; // viewer's rating of movie
	double counter; // keeps track of amount of ratings
	double total;// adds total rating together
	// ratings for movie
	int terrible = 0; //1
	int bad = 0;//2
	int ok = 0;//3
	int good = 0;//4
	int great = 0;//5
	int invalid_counter = 0;// keeps track of invalid input amount
};
