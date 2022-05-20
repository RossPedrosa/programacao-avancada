#include "sculptor.h"
#include <iostream>
#include <fstream>




Sculptor::Sculptor(int _nx, int _ny, int _nz){
    nx = _nx;
    ny = _ny;
    nz = _nz;
}

Sculptor::~Sculptor()
{

}

void Sculptor::setColor(float r, float g, float b, float alpha)
{
    this ->r = r;
    this ->g = g;
    this ->b = b;
    this ->a = alpha;


}
/*
void Sculptor::putVoxel(int x, int y, int z)
{

}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1)
{

}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1)
{

}

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius)
{

}

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius)
{

}

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{

}

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{

}
*/
void Sculptor::writeOFF(const char *filename)
{
    std::ofstream fout;
    fout.open(filename);
    if (!fout.is_open()) {
      exit(1);
    }
    fout << "OFF \n";
    fout.close();


 }
