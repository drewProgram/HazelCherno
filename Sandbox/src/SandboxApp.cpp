#include <WHazel.h>

class Sandbox : public WHazel::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

WHazel::Application* WHazel::CreateApplication()
{
	return new Sandbox();
}