#include "rgbapixel.h"
/*This is a null constructor.*/
RGBAPixel::RGBAPixel (){
	this->red = 255;
	this->green = 255;
	this->blue = 255;
	this->alpha = 255;
}

/*This constructor initializes the pixel with given rgb valuse.*/
RGBAPixel::RGBAPixel (uint8_t red, uint8_t green, uint8_t blue){
	this->red = red;
	this->green = green;
	this->blue = blue;
}


