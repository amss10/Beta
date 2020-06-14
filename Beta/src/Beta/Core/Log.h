#pragma once

#include "Beta/Core/Core.h"

#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

namespace Beta {

	class Log
	{
	public:
		static void Init();

		static Ref<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		static Ref<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static Ref<spdlog::logger> s_CoreLogger;
		static Ref<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define BT_CORE_TRACE(...)    ::Beta::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BT_CORE_INFO(...)     ::Beta::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BT_CORE_WARN(...)     ::Beta::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BT_CORE_ERROR(...)    ::Beta::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BT_CORE_CRITICAL(...) ::Beta::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define BT_TRACE(...)         ::Beta::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BT_INFO(...)          ::Beta::Log::GetClientLogger()->info(__VA_ARGS__)
#define BT_WARN(...)          ::Beta::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BT_ERROR(...)         ::Beta::Log::GetClientLogger()->error(__VA_ARGS__)
#define BT_CRITICAL(...)      ::Beta::Log::GetClientLogger()->critical(__VA_ARGS__)
