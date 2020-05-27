#pragma once

#ifdef BT_PLATFORM_WINDOWS

extern Beta::Application* Beta::CreateApplication();

int main(int argc, char** argv)
{
	Beta::Log::Init();
	BT_CORE_WARN("Initialized Log!");
	int a = 5;
	BT_INFO("Hello! Var={0}", a);

	auto app = Beta::CreateApplication();
	app->Run();
	delete app;
}

#endif