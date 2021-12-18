#include <stdio.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "randomWordGeneration.h"
#include "infoCollection.h"

using namespace std;
// main program starts.
int main() {
	srand(time(0));

	string name;
	int age;
	//story starts
	cout << "[CONSOLE ACTIVATED]" << endl;
	cout << "user, you have now become the commander of this ship." << endl;
	cout << "you have proven yourself to be a leader by touching things without proper Authorization, very nice." << endl;
	cout << "user, identify yourself! who is the new commander of the vessel floating aimlessly in deep space known as :" << getShip() << endl;
	cout << "enter your first name." << endl;
	//user enters name
	cin >> name;
	cout << "Excellent, you are literate." << endl;
	cout << "now lets see if you are old enough to guide a crew in deep space." << endl;
	cout << "how old are you?" << endl;
	//user enters age.
	cin >> age;
	cout << "good enough for me, time to update the log and get this show on the road.\n\n" << endl;
	cout << "[COMMANDER LOG UPDATE]\n" << endl;
	infoCollection(name, age);
	cout << "\nnow that we have things settled, lets check on the crew." << endl;
	cout << "oh dear...\n" << endl;
	cout << "commander, the crew has been up to some very interesting tasks since the last commander died of " << getIllness() << endl;
	cout << "accessing files now.\n\n" << endl;
	cout << "[ACTIVITY LOG]\n" << endl;
	//random generator
	for (int i = 0; i < 7; i++) {
		cout << printStuff();
	}
	cout << "\n[END LOG]" << endl;
	//story continued
	cout << "\n\nas you can see the crew has not been tended to in a while." << endl;
	cout << "what to do...\n" << endl;
	cout << "i know, the ship now has a commander!" << endl;
	cout << name << " , what are our next steps? you are in charge now." << endl;
	cout << "what are your orders?\n" << endl;
	// end of code for now.

	return 0;
}