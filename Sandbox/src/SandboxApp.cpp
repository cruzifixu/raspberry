#include <raspberry.h>

class Sandbox : public raspberry::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}


};

raspberry::Application* raspberry::CreateApplication()
{
	return new Sandbox();
}