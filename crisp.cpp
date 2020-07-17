#include <GLFW/glfw3.h>
#include <stdlib.h>

#include <string>
#include <stdexcept>

#include "./src/constants.h"
#include "./src/crispApp.h"

int main(int argc, char *argv[]) {
    CrispApp app;
    
    try {
        app.run();
    } catch(std::exception *e) {
        logm(DEBUG_ERROR, e->what());
        exit(EXIT_FAILURE);
    }

    exit(EXIT_SUCCESS);
}
