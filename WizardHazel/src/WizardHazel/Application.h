#pragma once

#include "Core.h"

namespace WHazel {
	class WHAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// to be defined in CLIENT
	Application* CreateApplication();
}

