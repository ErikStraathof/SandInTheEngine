#pragma once

#ifdef SITE_PLATFORM_WINDOWS
extern SandInTheEngine::Application* SandInTheEngine::CreateApplication();

int main(int argc, char** argv)
{
	printf("Start engine");
	auto app = SandInTheEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif // SITE_PLATFORM_WINDOWS
