#include "configApp.h"

void init()
{
    blockResizeWindow();
    removeScroll();
}

string truncateText(const string& text) {
    if (text.length() > 16) {
        return text.substr(0, 16) + "...";
    }
    return text;
}