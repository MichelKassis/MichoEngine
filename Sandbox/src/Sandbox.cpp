#include <MichoEngine.h>


class Sandbox : public MichoEngine::Application
{
public:
	Sandbox()
	{
	
	}

	~Sandbox() 
	{
	
	}
};

MichoEngine::Application* MichoEngine::CreateApplication() {

	return new Sandbox();

}