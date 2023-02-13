#pragma once
#include "Show.h"
#include<string>
#include<stdio.h>
#include<iostream>

class TV :public Show {
private:
	std::string TVarray[10][5];
public:
	TV();
	TV(std::string title, int season, int episode);
	void play(int season, int episode);
	void details();
	void setTVarray(std::string tvarr, int season, int episode);
};

