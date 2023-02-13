#include "Show.h"
#include "Movie.h"
#include "TV.h"
#include <iostream>
#include <vector>

void PlayShow(Show& show) {
    show.details();
    show.play();
}

void PlayMovie(Movie& movie) {
    movie.details();
    movie.Play();
}

void PlayTV(TV& tvShow, std::string title, int season, int episode) {
    tvShow.details();
    tvShow.play(season, episode);
    tvShow.setTVarray(title, season, episode);
}


int main() {

    int press{ 0 };

    while (!(press == 6)) {

        std::cout << std::endl << "Press 1 for an instance of Show." << std::endl;
        std::cout << "Press 2 for an instance of Movie." << std::endl;
        std::cout << "Press 3 for an instance of TV Show." << std::endl;
        std::cout << "Press 4 for an instance of a Movie declared as a Show." << std::endl;
        std::cout << "Press 5 for an instance of a TV Show declared as a Show." << std::endl;
        std::cout << "Press 6 to quit." << std::endl;

        std::cin >> press;
        std::cout << std::endl;

        if (press == 1) {
            std::string title, description;
            std::cout << "Enter the title of the Show: ";
            std::cin >> title;
            std::cout << "Enter the description: ";
            std::cin >> description;
            Show show(title, description);
            PlayShow(show);
        }
        else if (press == 2) {
            std::string title, description, credits;
            std::cout << "Enter the title of the Movie: ";
            std::cin >> title;
            std::cout << "Enter the description: ";
            std::cin >> description;
            std::cout << "Enter the credits: ";
            std::cin >> credits;
            Movie movie(title, description, credits);
            PlayMovie(movie);
        }

        else if (press == 3) {
            std::string title;
            int season, episode;
            std::cout << "Enter the title of the TV Show: ";
            std::cin >> title;
            std::cout << "Enter the season number: ";
            std::cin >> season;
            std::cout << "Enter the episode number: ";
            std::cin >> episode;

            TV tvShow(title, season, episode);
            PlayTV(tvShow, title, season, episode);
        }
        else if (press == 4) {
            std::string title, description, credits;
            std::cout << "Enter the title: ";
            std::cin >> title;
            std::cout << "Enter the description: ";
            std::cin >> description;
            std::cout << "Enter the credits: ";
            std::cin >> credits;

            Movie movie(title, description, credits);
            Show& show = movie;
            PlayMovie(movie);
        }
        else if (press == 5) {
            std::string title, description;
            std::cout << "Enter the title: ";
            std::cin >> title;
            std::cout << "Enter the description: ";
            std::cin >> description;
            Show tvshow(title, description);
            Show& show = tvshow;
            PlayShow(tvshow);
        }
    }
    return 0;
}