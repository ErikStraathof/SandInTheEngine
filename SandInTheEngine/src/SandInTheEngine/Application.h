#pragma once
#include "Core.h"

namespace SandInTheEngine
{
	class SAND_IN_THE_ENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}

