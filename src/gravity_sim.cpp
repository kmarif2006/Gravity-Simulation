#include<GL/glew.h>
#include<GLFW/glfw3.h>
#include<glm/glm.hpp>
#include<glm/gtc/matrix_transform.hpp>
#include<glm/gtc/type_ptr.hpp>
#include<bits/stdc++.h>

GLFWwindow* StartGLFW();
int main(){
    GLFWwindow* window = StartGLFW();
    if (!window) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    // Main loop
    while (!glfwWindowShouldClose(window)) {

        // Render your scene here

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}
GLFWwindow* StartGLFW() {
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return nullptr;
    }


    GLFWwindow* window = glfwCreateWindow(800, 600, "Gravity Simulation", nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return nullptr;
    }

    glfwMakeContextCurrent(window);
    return window;
}