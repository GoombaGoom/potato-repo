#include <GLFW3/glfw3.h>
void render(){
  GLfloat vertices[] = {
    -0.5f, -0.5f, 0.0f,
     0.5f, -0.5f, 0.0f,
     0.0f,  0.5f, 0.0f
  };  
  unsigned int VAO;
  unsigned int VBO;
  glGenBuffers(1, &VBO);
  glBindBuffer(GL_ARRAY_BUFFER, VBO);
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3*sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);
  glGenVertexArrais(0, &VAO);
  glDrawArrays(GL_TRIANGLES, 0, 3);
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
