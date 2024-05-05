#pragma once

#include <glad/gl.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

namespace Blib {
GLFWwindow *CreateWindow(const char *title, int width, int height);
bool WindowShouldClose(GLFWwindow *window);
void DestroyWindow(GLFWwindow *window);
void BeginUI();
void EndUI();
} // namespace Blib
