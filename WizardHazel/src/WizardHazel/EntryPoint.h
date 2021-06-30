#pragma once

#ifdef WHZ_PLATFORM_WINDOWS

extern WHazel::Application* WHazel::CreateApplication();

int main(int argc, char** argv)
{
	printf("Wizard Hazel Engine!\n"); 
	
	auto app = WHazel::CreateApplication();
	app->Run();

	delete app;
}
#endif