#include "pierre.h"
//#include "group.h"

pierre::pierre(bool couleur, int x, int y, group* group)
{
   //ctor
   this->couleur = couleur;
   this->x = x;
   this->y = y;
   this->grp = group;
}

pierre::~pierre()
{
   //dtor
}

int pierre::getX(){
   return x;
}

int pierre::getY(){
   return y;
}

bool pierre::getCouleur(){
   return couleur;
}

