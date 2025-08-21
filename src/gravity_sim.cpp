#include<bits/stdc++.h>
#include<GLFW/glfw3.h>
GLFWwindow* window_int(){
    if(!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return nullptr;
    }
    GLFWwindow* window = glfwCreateWindow(800, 600, "Gravity Simulation", nullptr, nullptr);
    return window;
};
int main(){
    GLFWwindow* window = window_int();
    if (!window) {
        return -1;
    }
    while (!glfwWindowShouldClose(window)) {
        // Render your simulation here
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
