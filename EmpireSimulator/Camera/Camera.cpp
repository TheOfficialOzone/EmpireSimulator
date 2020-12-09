

#include "Camera.h"


//Sets the viewport position
void ViewPort::setPos(double x, double y) {
	this->x = x;
	this->y = y;
}
//Sets the viewport size
void ViewPort::setSize(double width, double height) {
	this->width = width;
	this->height = height;
}

//Gets the viewport position
void ViewPort::getPos(double* x, double* y) {
	*x = this->x;
	*y = this->y;
}
//Gets the viewport size
void ViewPort::getSize(double* width, double* height) {
	*width = this->width;
	*height = this->height;
}



//Sets the camera's position
void Camera::setPos(double x, double y) {
	this->x = x;
	this->y = y;
}
//Sets the camera's size
void Camera::setSize(double width, double height) {
	this->width = width;
	this->height = height;
}


//Camera Controls
//Enable
void Camera::enableController() {
	myController.enableController();
}
//Disable
void Camera::disableController() {
	myController.disableController();
}
//Update
void Camera::updateCameraPos() {
	//For controlling the camera
	float camXMove, camYMove;
	myController.getChangeXY(&camXMove, &camYMove);	//Gets positions

	addPos(camXMove, camYMove);	//Adds the position
	myController.resetValues();	//Resets the values of the controller
}
//Letting the controller receive input
void Camera::updateControllerInfo() {
	myController.updateControllerValues();
}

//Adds to the camera's position
void Camera::addPos(double xAdd, double yAdd) {
	x += xAdd;
	y += yAdd;
}
//Adds to the camera's size
void Camera::addSize(double wAdd, double hAdd) {
	width += wAdd;
	height += hAdd;
}

//Sets the camera's position
void Camera::getPos(double* x, double* y) {
	*x = this->x;
	*y = this->y;
}
//Sets the camera's size
void Camera::getSize(double* width, double* height) {
	*width = this->width;
	*height = this->height;
}