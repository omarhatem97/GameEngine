#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::createApplication();

int main()
{
	std::cout << "hello from engine\n";
	auto app = Hazel::createApplication();
	app->run();
	delete app;
}


#endif // HZ_PLATFORM_WINDOWS
