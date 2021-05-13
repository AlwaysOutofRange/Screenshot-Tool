//
// Created by nico on 27.04.21.
//

#ifndef SCREENSHOT_TOOL_SCREEN_HPP
#define SCREENSHOT_TOOL_SCREEN_HPP

#include <string>

class Screen {
private:
    static std::string timeToString();
    static void check();

public:
    static void takeScreen();
    static void takeScreen(int delay);
};

#endif //SCREENSHOT_TOOL_SCREEN_HPP
