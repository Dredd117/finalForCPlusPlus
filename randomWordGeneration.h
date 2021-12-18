#pragma once
#include <stdio.h>
#include <string>

using namespace std;

string ships[5] = { "The Armada", "Le Delta", "The Forge", "Counter Bean", "The Dragon" };
string nouns[14] = { "toilet", "ball", "sock", "cat", "space suit", "Kim", "Mike", "Dunn", "rations", "last captain", "cletus", "dinosaur", "midget Jim", "Groot" };
string verbs[13] = { "did", "killed", "ate", "beat", "hugged", "smelled", "touched", "stabbed", "smacked", "ejected", "shat on", "deep fried", "mutilated" };
string illness[8] = { "nipple chafing", "foot rash", "ebola", "space AIDS", "blue balls", "stroke", "ass cancer", "black lung" };
string crew[10] = { "Dave", "Yuki", "Anna", "Ford", "Sam", "Randy", "Lena", "Dustin", "Wendy", "Frank" };
string reason[10] = { "for nothing", "because of religeon", "for love", "in the name of FREEDOM", "because politics", "because STD's", "because Christmas", "because they were poor", "because they were racist", "because they were high" };

string getCrew() {
	return crew[rand() % 10];
}
string getReasons() {
	return reason[rand() % 10];
}
string getIllness() {
	return illness[rand() % 8];
}
string getShip() {
	return ships[rand() % 5];
}
string getNoun() {
	return nouns[rand() % 14];
}
string getVerbs() {
	return verbs[rand() % 13];
}

string printStuff() {
	string fnl = getCrew() + " " + getVerbs() + " " + getNoun() + " " + getReasons() + "\n";
	return fnl;
}