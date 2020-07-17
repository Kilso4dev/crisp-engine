#include "crispApp.h"

void CrispApp::initGLFW() {
    logm(DEBUG_INFO, "Initialising GLFW Window...");
    containerWin = new CrispWindow(1280, 720, "Vulkan Test");
    logm(DEBUG_INFO, "GLFW initialisation Done!");
}

void CrispApp::initVulkan() {
    logm(DEBUG_INFO, "Initialising Vulkan...");
    


    logm(DEBUG_INFO, "Vulkan initialisation Done!");
}

void CrispApp::initApp() {
    logm(DEBUG_INFO, "Initialising Crisp...");
    


    logm(DEBUG_INFO, "Crisp initialisation Done!");
}

void CrispApp::mainLoop() {
   logm(DEBUG_INFO, "Running Main Loop");



   logm(DEBUG_INFO, "Exited Main Loop");
}

void CrispApp::cleanup() {
    logm(DEBUG_INFO, "Cleanup starting....");
    delete containerWin;
    logm(DEBUG_INFO, "Cleanup Done!");

}

