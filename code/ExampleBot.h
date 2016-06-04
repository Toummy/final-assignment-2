#pragma once
#include "IBot.h"

class ExampleBot : public IBot
{
public:
	ExampleBot() { }
	virtual ~ExampleBot() { }

	void Update() override;
};
