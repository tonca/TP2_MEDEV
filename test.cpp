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
   EXPECT_EQ(4, caillou.getY());

}
