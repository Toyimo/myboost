// myboost.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Tests.h"
#include <boost/any.hpp>


int _tmain(int argc, _TCHAR* argv[])
{
	boost::Any testInt(10);
	int val = static_cast<int>(testInt);
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

