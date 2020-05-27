#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Beta {

	class BETA_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define BT_CORE_TRACE(...)    ::Beta::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BT_CORE_INFO(...)     ::Beta::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BT_CORE_WARN(...)     ::Beta::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BT_CORE_ERROR(...)    ::Beta::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BT_CORE_FATAL(...)    ::Beta::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define BT_TRACE(...)	      ::Beta::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BT_INFO(...)	      ::Beta::Log::GetClientLogger()->info(__VA_ARGS__)
#define BT_WARN(...)	      ::Beta::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BT_ERROR(...)	      ::Beta::Log::GetClientLogger()->error(__VA_ARGS__)
#define BT_FATAL(...)	      ::Beta::Log::GetClientLogger()->fatal(__VA_ARGS__)