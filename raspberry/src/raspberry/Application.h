#pragma once

#include "Core.h"

namespace raspberry {
	class RASPBERRY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// to be defined in CLIENT
	Application* CreateApplication();
}
