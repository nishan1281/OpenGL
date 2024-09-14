#include "config.h"

int main(){
    GLFWwindow *window;

    if (!glfwInit()){
        std::cerr << "GLFW initialization failed!" << std::endl;
        return -1;
    }

    window = glfwCreateWindow(640, 480, "My Window", NULL, NULL);

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents(); 
    }

    glfwTerminate();
    return 0;
}