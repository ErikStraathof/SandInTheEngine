#pragma once

#ifdef SITE_PLATFORM_WINDOWS
extern SandInTheEngine::Application* SandInTheEngine::CreateApplication();

int main(int argc, char** argv)
{
	SandInTheEngine::Debug::Init();

	auto app = SandInTheEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif // SITE_PLATFORM_WINDOWS
