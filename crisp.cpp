#include <GLFW/glfw3.h>
#include <stdlib.h>

#include <string>

#include "./src/constants.h"
#include "./src/window.h"

int main(int argc, char *argv[]) {
    logm(DEBUG_INFO, "hey Mark!");
    CrispWindow *win = new CrispWindow(1280, 720, "Vulkan first test");

    win->runLoop();

    logm(DEBUG_INFO, "Done!");
}
