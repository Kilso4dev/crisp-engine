#include <string>
#include <iostream>

#include <GLFW/glfw3.h>



class CrispWindow {
    private:
        GLFWwindow *win;
        
    public:
        CrispWindow(uint32_t width, uint32_t height, std::string title);

        void runLoop();

};

