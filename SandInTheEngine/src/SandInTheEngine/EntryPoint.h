#pragma once

#ifdef SITE_PLATFORM_WINDOWS
extern SandInTheEngine::Application* SandInTheEngine::CreateApplication();

int main(int argc, char** argv)
{
	SandInTheEngine::Debug::Init();
	SITE_CORE_WARN("Initialized the engine");
	SITE_INFO("Sand is leaking");


	auto app = SandInTheEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif // SITE_PLATFORM_WINDOWS
