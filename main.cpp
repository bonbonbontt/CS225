#include <iostream>
#include "png.h"
#include "rgbapixel.h"
//Author: Yitong Song 
//NETID: ysong92
//Date: 8.27.2016

/*This function opens an image named in.png,rotates the image by 180 degrees, and writes the resulting image to the file out.png.*/
int main(){
	PNG image("in.png");

	size_t height = image.height();
	size_t width = image.width();
	PNG out(width,height);
	 
	for (size_t y =0;y<height;y++){
		for(size_t x = 0; x<width; x++){
			out(x,y)->red = image(width-x-1,height-y-1)->red;
			out(x,y)->green = image(width-x-1,height-y-1)->green;
			out(x,y)->blue = image(width-x-1,height-y-1)->blue;
			out(x,y)->alpha = image(width-x-1,height-y-1)->alpha;
			
		}
	}
	out.writeToFile("out.png");
	return 0;
}

