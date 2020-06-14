#include "btpch.h"
#include "Beta/Core/Input.h"

#ifdef BT_PLATFORM_WINDOWS
	#include "Platform/Windows/WindowsInput.h"
#endif

namespace Beta {

	Scope<Input> Input::s_Instance = Input::Create();

	Scope<Input> Input::Create()
	{
	#ifdef BT_PLATFORM_WINDOWS
		return CreateScope<WindowsInput>();
	#else
		BT_CORE_ASSERT(false, "Unknown platform!");
		return nullptr;
	#endif
	}
} 