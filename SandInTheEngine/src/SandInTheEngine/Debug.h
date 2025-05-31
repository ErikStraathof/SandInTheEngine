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

//Core log macros
#define SITE_CORE_TRACE(...) ::SandInTheEngine::Debug::GetCoreLogger()->trace(__VA_ARGS__)
#define SITE_CORE_INFO(...) ::SandInTheEngine::Debug::GetCoreLogger()->info(__VA_ARGS__)
#define SITE_CORE_WARN(...) ::SandInTheEngine::Debug::GetCoreLogger()->warn(__VA_ARGS__)
#define SITE_CORE_ERROR(...) ::SandInTheEngine::Debug::GetCoreLogger()->error(__VA_ARGS__)
#define SITE_CORE_FATAL(...) ::SandInTheEngine::Debug::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define SITE_TRACE(...) ::SandInTheEngine::Debug::GetClientLogger()->trace(__VA_ARGS__)
#define SITE_INFO(...)	::SandInTheEngine::Debug::GetClientLogger()->info(__VA_ARGS__)
#define SITE_WARN(...)	::SandInTheEngine::Debug::GetClientLogger()->warn(__VA_ARGS__)
#define SITE_ERROR(...) ::SandInTheEngine::Debug::GetClientLogger()->error(__VA_ARGS__)
#define SITE_FATAL(...) ::SandInTheEngine::Debug::GetClientLogger()->fatal(__VA_ARGS__)