#include<GL/glew.h>
#include<GLFW/glfw3.h>
#include<glm/glm.hpp>
#include<glm/gtc/matrix_transform.hpp>
#include<glm/gtc/type_ptr.hpp>
#include<bits/stdc++.h>
using namespace std;
const float screenWidth = 800.0f;
const float screenHeight = 600.0f;
const double G = 6.6743e-11; // Gravitational constant in m^3 kg^-1 s^-2
GLFWwindow* StartGLFW();

class Planet{
    public:
    vector<float>position;
    vector<float>velocity;
    float radius;
    float mass;
    Planet(vector<float>pos, vector<float>vel,float m,float r=15.0f) : position(pos), velocity(vel), radius(r),mass(m) {}
    void accelerate(float x, float y) {
        // Update velocity based on force and time step
        this->velocity[0] += x;
        this->velocity[1] += y;
    };
    void updatePosition() {
        // Update position based on velocity and time step
        this->position[0] += this->velocity[0];
        this->position[1] += this->velocity[1];
    };
    void DrawCircle(float centerX, float centerY, float radius, int resolution) {
        glBegin(GL_TRIANGLE_FAN);
        glVertex2d(centerX, centerY); // Center of the circle
        for(int i=0;i<=resolution;i++){
            float angle = 2.0f * M_PI * i / resolution;
            float x = centerX + radius * cos(angle);
            float y = centerY + radius * sin(angle);
            glVertex2d(x, y);
        }
        glEnd();
    }
};
int main(){
    GLFWwindow* window = StartGLFW();
    float centerX=screenWidth/2.0f;
    float centerY=screenHeight/2.0f;
    float radius=50.0f;
    int resolution=100;
    vector<Planet> planets={
        Planet(vector<float>{200.0f,500.0f}, vector<float>{5.0f,0.0f}, 7.35*pow(10,2)), //mass of moon
        Planet(vector<float>{400.0f,300.0f}, vector<float>{5.0f,2.0f}, 7.35*pow(10,2)),

    };
    

    while (!glfwWindowShouldClose(window)) {

        // Render your scene here
        glClear(GL_COLOR_BUFFER_BIT);
        for (auto& planet : planets) {
            for(auto& obj:planets){
                if(&obj != &planet) { // Avoid self-collision
                    float dx = obj.position[0] - planet.position[0];
                    float dy = obj.position[1] - planet.position[1];
                    float distance = sqrt(dx * dx + dy * dy);
                    vector<float>direction={dx/distance, dy/distance};
                    distance*=1000; // Scale distance for force calculation
                    float Gforce=(G* obj.mass * planet.mass) / (distance * distance);
                    float acc1=Gforce/obj.mass;
                    vector<float>acc={acc1 * direction[0], acc1 * direction[1]};
                    planet.accelerate(acc[0], acc[1]); // Update planet's velocity based on gravitational force
                }
            }
            planet.updatePosition(); // Update position based on velocity
            planet.DrawCircle(planet.position[0], planet.position[1], planet.radius, resolution);
            if(planet.position[0] < 0 || planet.position[0] > screenWidth || 
               planet.position[1] < 0 || planet.position[1] > screenHeight) {
                // Reset position if out of bounds
                planet.position[0] = centerX;
                planet.position[1] = centerY;
                planet.velocity = {5.0f, 0.0f}; // Reset velocity
            }
        }
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

    //set viewport
    glViewport(0, 0, screenWidth, screenHeight);
    // Set the clear color
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    // Enable blending for transparency
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    // Set the projection matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0f, screenWidth, 0.0f, screenHeight, -1.0f, 1.0f);
    // Set the modelview matrix
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    return window;
}