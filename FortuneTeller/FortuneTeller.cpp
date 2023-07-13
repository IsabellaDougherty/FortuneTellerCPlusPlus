/*The Fortune Teller
a simple program introducing some fundamental programming concepts*/

#include <iostream> // include a library
using namespace std;
int main() //main() starts the program
{
	//-----------------------------Variable Declarations------------------------
	int favorite;
	int disliked;
	int lucky;
	//--------------------------Introduce The Program---------------------
	cout << "Since the beginning of time, there has always been Miraculous, accessories that grant the wearer special powers to" << endl;
	cout << "protect the world from those who would do it harm. This, however, all changed when an impaitient young boy named Fu," << endl;
	cout << "a gaurdian in training of the Miraculous, who could not maintain his patience long enough to watch over" << endl;
	cout << "a box containing these mystical artifacts for 24 hours without food or water. Starving, he utilized one of the Miraculous" << endl;
	cout << "in an attempt to have a small creature he created bring him something to eat. However, his hunger and greed corrupted the" << endl;
	cout << "creature, and instead of simply bringing him food, the creature craved devouring all of the Miraculous. In a desperate" << endl;
	cout << "attempt to protect these mystical items, Fu took the box holding the Miraculous and ran with it. That was hundreds of years" << endl;
	cout << "ago now, and he still remains. Caring for the Miracle Box in his old age. But two Miraculous have been lost from it. Having" << endl;
	cout << "fallen into the hands of one who wishes to terrorize Paris, Fu has decided it is time to bestow upon ordinary citizens the" << endl;
	cout << "Miraculous in hopes they will be able to protect the innocent. Which Miraculous will he bestow upon you? Utilizing" << endl;
	cout << "a complex mathmatical formula from your favorite and disliked numbers, your Miraculous will be decided." << endl;
	//---------------Get User Input--------------------------
	cout << "Enter your favorite number (no decimals): "; //output
	cin >> favorite;
	cout << "Enter a number you don't like (no decimals): ";
	cin >> disliked;
	//Next calculate the user's lucky number
	lucky = (favorite * disliked) % 10;
	cout << endl << "Your secret , lucky number is: " << lucky << endl;
	if (lucky < 0) { //	conditionial, values less than 0
		cout << "Much like the black cat, you bring destruction where you please." << endl;
	}
	if (lucky >= 0 && lucky < 5) {
		cout << "Blending in with the world around you, you are often as sneaky as the fox" << endl;
	}
	if (lucky >= 5 && lucky < 9) {
		cout << "You mimic the turtle, your hard shell always holding strong to protect those you love" << endl;
	}
	if (lucky = 9) {
		cout << "Your luck is similar to that of the ladybug's, surprising and always inviting." << endl;
	}
			/*If you know what the theme for all of these are without this comment I'm plesantly impressed. The theme is the
			Miraculous from the show Miraculous Ladybug. It's a children's show with a really amazing plot line. Highly reccomend.*/

	//-----------Code to help the program exit "gracefully"----------------
	cin.ignore();
	cout << "Press enter to quit." << endl;
	cin.ignore();
	cout << "Go, and protect Paris with your new discovered powers" << endl;
	return 0;
}