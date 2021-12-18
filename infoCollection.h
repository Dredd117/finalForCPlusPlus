#pragma once
#include <stdio.h>
#include <string>

using namespace std;

//this function assignes name and age to the user and sends it back.
void infoCollection(string name, int age = 0) {
	cout << "name of current commander is :" << name << endl;
	if (age != 0) {
		cout << "current age of commander is :" << age << endl;
	}

}
