#ifndef CRISP_APP_H
#define CRISP_APP_H

#include "./util/logging.h"
#include "./window.h"

class CrispApp {
    public:
        ~CrispApp() {
            cleanup();
        }

        void run() {
            initGLFW();
            initVulkan();
            initApp();
            mainLoop();
            cleanup();
        }
    private:
        CrispWindow *containerWin;

        void initGLFW();
        void initVulkan();
        void initApp();
        void mainLoop();
        void cleanup();

};

#endif // CRISP_APP_H
