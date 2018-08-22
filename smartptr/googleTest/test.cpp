#include "pch.h"
#include "../smartptr/smartptr.h"

using namespace std;

TEST(SmartPtrTestCase, Destructor ) {
  

	vector<MessagePtr> v;

	//MessagePtr m1 = new Message{ 1, 1, "login m1" };
	//v.push_back(m1);

	//smartMessagePtr m2(new Message{ 1, 1, "login m2" });
	//vector<smartMessagePtr> sv;
	//sv.push_back(m2);


	EXPECT_EQ(1, 1);
}


//int main() {
//	return RUN_ALL_TESTS();
//}

