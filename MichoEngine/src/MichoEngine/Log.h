#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "stdarg.h"
namespace MichoEngine {
	
	class MENG_API Log
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

//Macros for Core Logger
#define MENG_CORE_TRACE(...)  ::MichoEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MENG_CORE_INFO(...)   ::MichoEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MENG_CORE_WARN(...)   ::MichoEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MENG_CORE_ERROR(...)  ::MichoEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MENG_CORE_FATAL(...)  ::MichoEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Macros for Client Logger
#define MENG_TRACE(...)      ::MichoEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MENG_INFO(...)       ::MichoEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define MENG_WARN(...)       ::MichoEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MENG_ERROR(...)      ::MichoEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define MENG_FATAL(...)      ::MichoEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)