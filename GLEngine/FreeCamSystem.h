#pragma once

#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


#include <unordered_map>

class FreeCamSystem
{
public:
	void update(GLfloat&, bool[], GLfloat &, GLfloat &, std::unordered_map<GLuint, GLuint> &, std::unordered_map<GLuint, glm::vec3> &, std::unordered_map<GLuint, glm::vec3> &);
};

