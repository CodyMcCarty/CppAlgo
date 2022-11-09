#include "pch.h"
#include "CppUnitTest.h"
#include "../CppSolutions/Problems.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ProblemsTests
{
	TEST_CLASS(ProblemsTests)
	{
	public:
		Problems p;

		//ProblemsTests() :
		//	p()
		//{

		//}
		
		TEST_METHOD(TestMethod1)
		{
			//Problems p;
			p.Add(2, 2);
			int actual = 4;
			Assert::AreEqual(4, actual);
		}
	};
}
