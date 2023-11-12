#pragma once

#ifdef RASPBERRY_PLATFORM_WINDOWS

extern raspberry::Application* raspberry::CreateApplication();

int main(int argc, char** argv)
{
	auto app = raspberry::CreateApplication();
	app->Run();
	delete app;
}

#endif