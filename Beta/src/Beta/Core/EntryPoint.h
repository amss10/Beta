#pragma once
#include "Beta/Core/Core.h"

#ifdef BT_PLATFORM_WINDOWS

extern Beta::Application* Beta::CreateApplication();

int main(int argc, char** argv)
{
	Beta::Log::Init();

	BT_PROFILE_BEGIN_SESSION("Startup", "BetaProfile-Startup.json");
	auto app = Beta::CreateApplication();
	BT_PROFILE_END_SESSION();

	BT_PROFILE_BEGIN_SESSION("Runtime", "BetaProfile-Runtime.json");
	app->Run();
	BT_PROFILE_END_SESSION();

	BT_PROFILE_BEGIN_SESSION("Startup", "BetaProfile-Shutdown.json");
	delete app;
	BT_PROFILE_END_SESSION();
}

#endif
