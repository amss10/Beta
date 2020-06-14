#pragma once

namespace Beta
{
	typedef enum class MouseCode : uint16_t
	{
		// From glfw3.h
		Button0                = 0,
		Button1                = 1,
		Button2                = 2,
		Button3                = 3,
		Button4                = 4,
		Button5                = 5,
		Button6                = 6,
		Button7                = 7,

		ButtonLast             = Button7,
		ButtonLeft             = Button0,
		ButtonRight            = Button1,
		ButtonMiddle           = Button2
	} Mouse;
	
	inline std::ostream& operator<<(std::ostream& os, MouseCode mouseCode)
	{
		os << static_cast<int32_t>(mouseCode);
		return os;
	}
}

#define BT_MOUSE_BUTTON_0      ::Beta::Mouse::Button0
#define BT_MOUSE_BUTTON_1      ::Beta::Mouse::Button1
#define BT_MOUSE_BUTTON_2      ::Beta::Mouse::Button2
#define BT_MOUSE_BUTTON_3      ::Beta::Mouse::Button3
#define BT_MOUSE_BUTTON_4      ::Beta::Mouse::Button4
#define BT_MOUSE_BUTTON_5      ::Beta::Mouse::Button5
#define BT_MOUSE_BUTTON_6      ::Beta::Mouse::Button6
#define BT_MOUSE_BUTTON_7      ::Beta::Mouse::Button7
#define BT_MOUSE_BUTTON_LAST   ::Beta::Mouse::ButtonLast
#define BT_MOUSE_BUTTON_LEFT   ::Beta::Mouse::ButtonLeft
#define BT_MOUSE_BUTTON_RIGHT  ::Beta::Mouse::ButtonRight
#define BT_MOUSE_BUTTON_MIDDLE ::Beta::Mouse::ButtonMiddle
