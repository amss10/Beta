#include "btpch.h"
#include "Beta/Core/Window.h"

#ifdef BT_PLATFORM_WINDOWS
	#include "Platform/Windows/WindowsWindow.h"
#endif

namespace Beta
{

	Scope<Window> Window::Create(const WindowProps& props)
	{
	#ifdef BT_PLATFORM_WINDOWS
		return CreateScope<WindowsWindow>(props);
	#else
		BT_CORE_ASSERT(false, "Unknown platform!");
		return nullptr;
	#endif
	}

}