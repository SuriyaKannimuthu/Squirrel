#pragma once

#ifdef SQ_PLATFORM_WINDOWS

extern Squirrel::Application* Squirrel::CreateApplication();

int main() 
{
	printf("Squirrel Engine");
	auto app = Squirrel::CreateApplication();
	app->Run();
	delete app;
}
#else
	#error Squirrel only supports windows
#endif // SQ_PLATFORM_WINDOWS