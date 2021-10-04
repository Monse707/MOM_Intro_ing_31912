

#include <iostream>

int main(int argc, char* argv[])
{


    int ancho ;
    int alto;
    int origen_x,origen_y,finY,finX;
    float porcentajeOX, porcentajeOY, porcentajeAncho, porcentajeAlto;

    
    scanf_s("%i %i %f %f %f %f", &ancho, &alto, &porcentajeOX, &porcentajeOY, &porcentajeAncho, &porcentajeAlto);
    origen_x = (int)(ancho * porcentajeOX);
    origen_y = (int)(alto * porcentajeOY);
    finY = (int)(alto * porcentajeAlto + origen_y);
    finX = (int)(ancho * porcentajeAncho + origen_x);


    printf("%i %i  %.2f  %.2f  %.2f  %.2f %i %i %i %i",ancho,alto,porcentajeOX,porcentajeOY,porcentajeAncho,porcentajeAlto, origen_x, origen_y, finX, finY);
    
    return 0;
}


