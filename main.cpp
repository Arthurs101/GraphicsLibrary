#include "vernuliGL.cpp"
#include <vector>
#include <iostream>
int main() {
    // Crear una imagen de ejemplo
    int width = 1920;
    int height = 1080;
    generateBMP(width, height);
    Load3DObjects("model.obj",{((float)width)/2, ((float)height/2)},{100,100,100});
    Render3DObjects('t');
    writeBMP("example.bmp");
    return 0;
}

