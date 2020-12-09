#pragma once

#ifndef CAMERA_H
#define CAMERA_H
//		Standard Libraries

//		Imported libraries

//		Custom Libraries
#include "GlobalAPI/Controls/Controls.h"

//Used when rendering the game
//Determines where anything will be rendered within the game Window
class ViewPort {
private:
	double x, y;
	double width, height;

public:

	ViewPort(int newX, int newY, int newWidth, int newHeight) {
		x = newX;	//Sets Pos
		y = newY;
		width = newWidth;	//Sets Size
		height = newHeight;
	}
	//Sets the viewport position
	void setPos(double x, double y);
	//Sets the viewport size
	void setSize(double width, double height);

	//Gets the viewport position
	void getPos(double* x, double* y);
	//Gets the viewport size
	void getSize(double* width, double* height);
};


//Used when rendering the game
//Determines what will be rendered within the game World
class Camera {
private:
	double x, y;
	double width, height;
	Controls myController;	//For controlling the camera

public:
	//Constructor for camera
	//Contructs the controller as well
	Camera(int newX, int newY, int newWidth, int newHeight, bool cameraReadState) : myController(cameraReadState) {
		x = newX;	//Sets Pos
		y = newY;
		width = newWidth;	//Sets Size
		height = newHeight;
	}

	//Sets the camera's position
	void setPos(double x, double y);
	//Sets the camera's size
	void setSize(double width, double height);

	//Adds to the camera's position
	void addPos(double x, double y);
	//Adds to the camera's size
	void addSize(double x, double y);

	//Camera Controls
	//Enable
	void enableController();
	//Disable
	void disableController();
	//Update
	void updateCameraPos();
	//Letting the controller receive input
	void updateControllerInfo();

	//Gets the cameras position
	void getPos(double* x, double* y);
	//Gets the cameras position
	void getSize(double* width, double* height);


};
#endif