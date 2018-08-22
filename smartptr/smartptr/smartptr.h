#pragma once

#include <memory>
#include <string>

class Message {

public:
	int32_t Header;
	int32_t Command;
	char Body[64];

	~Message();
};

typedef Message* MessagePtr;
typedef std::shared_ptr<Message> smartMessagePtr;
