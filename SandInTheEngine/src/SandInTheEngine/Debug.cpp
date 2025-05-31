#include "Debug.h"

#include "spdlog/sinks/stdout_color_sinks.h"

namespace SandInTheEngine
{
	std::shared_ptr<spdlog::logger> Debug::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Debug::s_GetClientLogger;

	void Debug::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("SANDINTHEENGINE");
		s_CoreLogger->set_level(spdlog::level::trace);

		s_GetClientLogger = spdlog::stdout_color_mt("APP");
		s_GetClientLogger->set_level(spdlog::level::trace);
	}

}