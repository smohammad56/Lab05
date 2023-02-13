#pragma once
#include "TV.h"
#include<iostream>
#include<string>
#include<stdio.h>
#include<array>

void TV::play(int season, int episode) {
	if (season <= 10 && season > 0) {
		if (episode <= 5 && episode > 0) {
			std::cout << TVarray[season - 1][episode - 1];
		}
	}
}

void TV::details() {
	std::cout << "Title: " + getTitle() + "\nDescription: " + getDescription();
	std::cout << "\n" << "Number of seasons: 10";
}

TV::TV() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 5; j++) {
			TVarray[i - 1][j - 1] = "Season " + std::to_string(i) + " Episode " + std::to_string(j);
		}
	}
	Show();
}

TV::TV(std::string title, int season, int episode) {
	setTitle(title);
}


void TV::setTVarray(std::string tvarr, int season, int episode) {
	if (season <= 10 && season > 0) {
		if (episode <= 5 && episode > 0) {
			TVarray[season][episode] = tvarr;
		}
		else {
			std::cout << "\n" << "Invalid episode input";
		}
	}
	else {
		std::cout << "\n" << "Invalid season input";
	}
}
