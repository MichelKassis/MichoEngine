#pragma once


#ifdef MENG_PLATFORM_WINDOWS

extern MichoEngine::Application* MichoEngine::CreateApplication();

int main(int argc, char** argv)
{
	//printf("Welcome to the Micho Engine!\n");

	MichoEngine::Log::Init();
	MENG_CORE_WARN("Initalized Core Log!");
	int a = 5;
	MENG_INFO("Im client log Var={0} ", a);


	auto app = MichoEngine::CreateApplication();
	app->Run();
	delete app;

}

#endif