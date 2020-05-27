#include <Beta.h>

class Sandbox : public Beta::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Beta::Application* Beta::CreateApplication()
{
	return new Sandbox();
}