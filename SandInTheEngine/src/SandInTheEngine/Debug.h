#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace SandInTheEngine
{
	
	class SAND_IN_THE_ENGINE_API Debug
	{
	public: 
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_GetClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_GetClientLogger;
	};
}
