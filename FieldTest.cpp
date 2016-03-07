/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	bool caught = false;
	
	minefield.placeMine(0,5);
	//ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
	try
	{
 	   ASSERT_TRUE( minefield.isSafe(5,5) );
    	} 
	catch (int err)
	{
		caught = true;         
    	}
	ASSERT_FALSE(caught);
 }
}
