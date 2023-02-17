#pragma once

#include <iostream>
#include <string>

#include "../include/glad/glad.h"
#include <GLFW/glfw3.h>

// Screen settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 500;

// Window functions prototypes 
void initGLFWWindow();
void processInput(GLFWwindow *window);
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
