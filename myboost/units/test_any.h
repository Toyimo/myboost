#pragma  once
#include "../any/any.h"
#include <string>
using std::string;

TEST(TestAny, testConstruct)
{
	mb::Any testInt(10);
	mb::Any testDouble(10.0);
	mb::Any testInt2(testInt);
	EXPECT_EQ(testInt.empty(), false);
	EXPECT_EQ(std::string(testDouble.type().name()), "double");
	EXPECT_EQ(std::string(testInt2.type().name()), "int");

	int val = mb::anyCast<int>(testInt);
	EXPECT_EQ(val, 10);

	bool test(false);
	try
	{
		double dVal = mb::anyCast<double>(testInt);
	}
	catch (...)
	{
		test = true;
	}

	EXPECT_EQ(test, true);
}

