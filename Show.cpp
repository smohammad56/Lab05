#include "Show.h"
#include <iostream>


Show::Show(){
	title = "UNKNOWN";
	description = "NO DESCRIPTION";
}

Show::Show(std::string t, std::string d){
	title = t;
	description = d;
}

void Show::play() {
	std::cout << "The show is playing" << "\n";
}

void Show::details() {
	std::cout << "Title: " + title + "\nDescription: " + description + "\n";
}
