#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shadowmapShader, cubeVBO, cubeVAO, cubeEBO, cube_texture, planeVBO, planeVAO, planeEBO, plane_texture, stexture, stexture2, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2;
	GLuint shaderProgram, VBOL1, VAOL1, EBOL1, textureL1, VBOL2, VAOL2, EBOL2, textureL2, VBOL3, VAOL3, EBOL3, textureL3, VBOL4, VAOL4, EBOL4, textureL4, stextureL1, stextureL2, stextureL3, stextureL4;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	float MOVE_SPEED, objX, objY, objZ, viewObjX, viewObjY, viewObjZ;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildCube();
	void BuildBeam(float xOffset, float yOffset, float zOffset, float xLength, float yLength, float zLength, char* texturePath, char* specularPath, GLuint& VAO, GLuint VBO, GLuint EBO, GLuint& texture, GLuint& stexture);
	void BuildTexturedPlane();
	void InitCamera();
	void InitObject();
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void MoveObject(float speed);
	void StrafeObject(float speed);
	void DrawBeam(GLuint& texture, GLuint& stexture, GLuint& VAO);
	void DrawCube();
	void DrawTexturedPlane();
};

