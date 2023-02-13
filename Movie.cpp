#include "Movie.h"
#include <iostream>

Movie::Movie(std::string t, std::string d, std::string c) {
	setTitle(t);
	setDescription(d);
	credits = c;
}

Movie::Movie() {
	Show();
	credits = "NO CREDITS";
}

void Movie::Play() {
	std::cout << "The movie credits are playing: " + credits + "\n";
}
