#pragma once


#ifdef MENG_PLATFORM_WINDOWS

extern MichoEngine::Application* MichoEngine::CreateApplication();

int main(int argc, char** argv)
{
	//printf("Welcome to the Micho Engine!\n");

	auto app = MichoEngine::CreateApplication();
	app->Run();
	delete app;

}

#endif