#include "SandInTheEngine.h"

class Sandbox : public SandInTheEngine::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};

SandInTheEngine::Application* SandInTheEngine::CreateApplication()
{
	return new Sandbox();
}