/* Classe Pierre

*/

#include "pierre.h"
//#include "group.h"

pierre::pierre(bool couleur, int x, int y)
{
   //ctor
   this->couleur = couleur;
   this->x = x;
   this->y = y;

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

