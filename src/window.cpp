#include "./window.h"

CrispWindow::CrispWindow(uint32_t width, uint32_t height, std::string title) {
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    win = glfwCreateWindow(width, height, title.c_str(), NULL, NULL);

    uint32_t extensionCount = 0;
    
}


void CrispWindow::runLoop() {
    while (!glfwWindowShouldClose(win)) {
        glfwPollEvents();
    }
    glfwDestroyWindow(win);
    glfwTerminate();
}
