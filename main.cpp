#include <GLFW3/glfw3.h>
void render(){
  GLfloat vertices[] = {
    -0.5f, -0.5f, 0.0f,
     0.5f, -0.5f, 0.0f,
     0.0f,  0.5f, 0.0f
  };  
  const int VAO;
  
  glDrawArrays();
}
int main(){
  glfwInit();
  GLFWwindow* window = glfwCreateWindow(800, 800 "GLFW window", NULL, NULL);
  glfwMakeContextCurrent();
  while(glfwWindowShouldClose(window)){
    glClear(GL_COLOR_BUFFER_BIT);
    render();
    glfwSwapBuffers();
    glfwPollEvents();
  }
  glfwDestroyWindow(window);
  return 0;
}
