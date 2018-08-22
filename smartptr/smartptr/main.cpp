#include "pch.h"
#include "smartptr.h"

#include <iostream>
#include <memory>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<MessagePtr> v;

	MessagePtr m1 = new Message{ 1, 1, "login m1" };
	v.push_back(m1);

	smartMessagePtr m2(new Message{ 1, 1, "login m2" });
	vector<smartMessagePtr> sv;
	sv.push_back(m2);

	return 1;
}

