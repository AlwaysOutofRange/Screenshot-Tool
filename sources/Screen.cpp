//
// Created by nico on 27.04.21.
//

#include <cstdlib>
#include <string>
#include <ctime>
#include <filesystem>
#include "../headers/Screen.hpp"

using namespace std;

void Screen::takeScreen(int delay) {
    check();

    string command = "import -window root -pause " + std::to_string(delay) + " " + std::string(getenv("HOME")) + "/screens/" + timeToString() + ".png";

    system(command.c_str());
}

std::string Screen::timeToString() {
    time_t timeNow;
    struct tm * formatTime;
    char buffer[80];

    time(&timeNow);
    formatTime = localtime(&timeNow);

    strftime(buffer, sizeof(buffer), "%d-%m-%Y.%H:%M:%S", formatTime);

    return string(buffer);
}

void Screen::check() {
    if(!filesystem::exists(string(getenv("HOME")) + "/CaptureImage")) {
        filesystem::create_directories(string(getenv("HOME")) + "/CaptureImage");
    }
}
