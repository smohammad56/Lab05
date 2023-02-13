#pragma once
#include "Show.h"
#include <string>

class Movie : public Show {
private:
	std::string credits;
public:
	Movie(std::string t, std::string d, std::string c);
	Movie();

	void setCredits(std::string c) { credits = c; }
	std::string getCredits() { return credits; }

	void Play();


};
