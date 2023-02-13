#pragma once
#include <string>

class Show {
private:
	std::string title;
	std::string description;
public:
	Show();
	Show(std::string t, std::string d);

	std::string getTitle() { return title; }
	std::string getDescription() { return description; }
	void setTitle(std::string t) { title = t; }
	void setDescription(std::string d) { description = d; }

	virtual void play();
	void details();

};
