#pragma once

#include "Core.h"

namespace MichoEngine {
	class MENG_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};
	// To be defined in Client
	Application * CreateApplication();
}
