/* Fichier de lancement des tests

le 17/12/2015

*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include "gtest/gtest.h"
#include "goban.h"

using namespace std;

int main(int argc, char **argv)
{

	::testing::InitGoogleTest(&argc, argv);


    return RUN_ALL_TESTS();
}


TEST(initialisation_test, goban_vide)
{
	goban go;

   int t = go.getTaille();

	//SCOPED_TRACE(i << "x" << j);
	EXPECT_EQ(0, t);



}

TEST(initialisation_test, goban_5)
{
	goban go;

	for(int i = 0 ; i < 5 ; i++)
	{
		go.addPierre(new pierre(true, i, i));

	}
   EXPECT_EQ(5, go.getTaille());

}

TEST(pierre_constructor_test, white)
{
	pierre caillou(false,0,5);

   EXPECT_EQ(false, caillou.getCouleur());
   EXPECT_EQ(0, caillou.getX());
   EXPECT_EQ(5, caillou.getY());

}

TEST(goban_test, position)
{
   goban go;
   pos position = {0,0};
	pierre* caillou = new pierre(false,0,0);
   bool toto=go.addPierre(caillou);
   EXPECT_EQ(false, go.addPierre(caillou));

   EXPECT_EQ(1, go.identifier(position));
   //EXPECT_EQ(0, go.identifier(position);

}

TEST(grouptest, position)
{

	pierre* caillou1 = new pierre(false,0,0);
   pierre* caillou2 = new pierre(false,0,1);
	group grp1(caillou1);
	group grp2(caillou2);
	grp1.absorb(*grp2);

   EXPECT_EQ(2, grp1.listPierres.size());


}

