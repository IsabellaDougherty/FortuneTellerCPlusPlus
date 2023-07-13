/*The Fortune Teller
a simple program introducing some fundamental programming concepts*/

#include <iostream> // include a library
using namespace std;
int main() //main() starts the program
{
	//-----------------------------Variable Declarations------------------------
	int month;
	int day;
	int year;
	int lucky;
	//--------------------------Introduce The Program---------------------
	cout << "Since the beginning of time, there has always been Miraculous, accessories that grant the wearer special powers to" << endl;
	cout << "protect the world from those who would do it harm. This, however, all changed when an impaitient young boy named Fu," << endl;
	cout << "a gaurdian in training of the Miraculous, who could not maintain his patience long enough to watch over a box" << endl;
	cout << "containing these mystical artifacts for 24 hours without food or water. Starving, he utilized one of the Miraculous" << endl;
	cout << "in an attempt to have a small creature he created bring him something to eat. However, his hunger and greed corrupted" << endl;
	cout << "it, and instead of simply bringing him food, the creature craved devouring all of the Miraculous. In a desperate" << endl;
	cout << "attempt to protect these mystical items, Fu took the box holding the Miraculous and ran with it. That was hundreds of" << endl;
	cout << "years ago now, and he still remains. Caring for the Miracle Box in his old age. But two Miraculous have been lost from" << endl;
	cout << "it. Having fallen into the hands of one who wishes to terrorize Paris, Fu has decided it is time to bestow upon" << endl;
	cout << "ordinary citizens the Miraculous in hopes they will be able to protect the innocent. Which Miraculous will he bestow" << endl;
	cout << "upon you? Utilizing a complex mathmatical formula from your favorite and disliked numbers, your Miraculous will be" << endl;
	cout << "decided." << endl;
	//---------------Get User Input--------------------------
	cout << "Enter your birth month (in numbers i.e. 1 or 10): "; //output
	cin >> month;
	cout << "Enter your birth date (in numbers i.e. 5 or 25): ";
	cin >> day;
	cout << "Enter your birth year (in numbers i.e. 2005 or 1936): ";
	cin >> year;
	//Next calculate the user's lucky number
	lucky = year/(month * day);
	cout << endl << "Your secret lucky number is: " << lucky << endl;
	if (lucky < 506) { //	conditionial, values less than 0
		cout << "Much like the black cat, you bring destruction where you please." << endl;
	}
	if (lucky >= 506 && lucky < 1011) {
		cout << "Blending in with the world around you, you are often as sneaky as the fox, playing tricks on the mind" << endl;
		cout << "to lead others into your trap." << endl;
	}
	if (lucky >= 1011 && lucky < 1516) {
		cout << "You mimic the turtle, your hard shell always holding strong to protect those you love." << endl;
	}
	if (lucky >= 1516) {
		cout << "Your luck is similar to that of the ladybug's, surprising and always inviting." << endl;
	}
	/*If you know what the theme for all of these are without this comment I'm plesantly impressed. The theme is the
	Miraculous from the show Miraculous Ladybug. It's a children's show with a really amazing plot line. Highly reccomend.*/

	//-----------Code to help the program exit "gracefully"----------------
	cin.ignore();
	cout << "Press enter to quit." << endl;
	cin.ignore();
	cout << "Go, and protect Paris with your new discovered powers." << endl;
	return 0;
}