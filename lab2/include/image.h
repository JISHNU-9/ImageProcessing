
#ifndef LAB2_IMAGE_H
#define LAB2_IMAGE_H

# include "matrixmath.h"
# include "ppm.h"

typedef struct Image
{
    matrix red;
    matrix green;
    matrix blue;
}*image;

image imgcreate(int m, int n);
PPMImage *Image2PPMImage(image img);
image PPMImage2Image(PPMImage *img);
matrix bgr2grey(image img);
void blur(matrix X);
void imgblur(image X);
void ppmgrey(image img, matrix grey);
void gausblur(image X, int n);
void edgedetect(matrix X);
void imgedgedetect(image X);

#endif //LAB2_IMAGE_H
