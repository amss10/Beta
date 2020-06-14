#pragma once

namespace Beta
{
	typedef enum class KeyCode : uint16_t
	{
		// From glfw3.h
		Space               = 32,
		Apostrophe          = 39, /* ' */
		Comma               = 44, /* , */
		Minus               = 45, /* - */
		Period              = 46, /* . */
		Slash               = 47, /* / */

		D0                  = 48, /* 0 */
		D1                  = 49, /* 1 */
		D2                  = 50, /* 2 */
		D3                  = 51, /* 3 */
		D4                  = 52, /* 4 */
		D5                  = 53, /* 5 */
		D6                  = 54, /* 6 */
		D7                  = 55, /* 7 */
		D8                  = 56, /* 8 */
		D9                  = 57, /* 9 */

		Semicolon           = 59, /* ; */
		Equal               = 61, /* = */

		A                   = 65,
		B                   = 66,
		C                   = 67,
		D                   = 68,
		E                   = 69,
		F                   = 70,
		G                   = 71,
		H                   = 72,
		I                   = 73,
		J                   = 74,
		K                   = 75,
		L                   = 76,
		M                   = 77,
		N                   = 78,
		O                   = 79,
		P                   = 80,
		Q                   = 81,
		R                   = 82,
		S                   = 83,
		T                   = 84,
		U                   = 85,
		V                   = 86,
		W                   = 87,
		X                   = 88,
		Y                   = 89,
		Z                   = 90,

		LeftBracket         = 91,  /* [ */
		Backslash           = 92,  /* \ */
		RightBracket        = 93,  /* ] */
		GraveAccent         = 96,  /* ` */

		World1              = 161, /* non-US #1 */
		World2              = 162, /* non-US #2 */

		/* Function keys */
		Escape              = 256,
		Enter               = 257,
		Tab                 = 258,
		Backspace           = 259,
		Insert              = 260,
		Delete              = 261,
		Right               = 262,
		Left                = 263,
		Down                = 264,
		Up                  = 265,
		PageUp              = 266,
		PageDown            = 267,
		Home                = 268,
		End                 = 269,
		CapsLock            = 280,
		ScrollLock          = 281,
		NumLock             = 282,
		PrintScreen         = 283,
		Pause               = 284,
		F1                  = 290,
		F2                  = 291,
		F3                  = 292,
		F4                  = 293,
		F5                  = 294,
		F6                  = 295,
		F7                  = 296,
		F8                  = 297,
		F9                  = 298,
		F10                 = 299,
		F11                 = 300,
		F12                 = 301,
		F13                 = 302,
		F14                 = 303,
		F15                 = 304,
		F16                 = 305,
		F17                 = 306,
		F18                 = 307,
		F19                 = 308,
		F20                 = 309,
		F21                 = 310,
		F22                 = 311,
		F23                 = 312,
		F24                 = 313,
		F25                 = 314,

		/* Keypad */
		KP0                 = 320,
		KP1                 = 321,
		KP2                 = 322,
		KP3                 = 323,
		KP4                 = 324,
		KP5                 = 325,
		KP6                 = 326,
		KP7                 = 327,
		KP8                 = 328,
		KP9                 = 329,
		KPDecimal           = 330,
		KPDivide            = 331,
		KPMultiply          = 332,
		KPSubtract          = 333,
		KPAdd               = 334,
		KPEnter             = 335,
		KPEqual             = 336,

		LeftShift           = 340,
		LeftControl         = 341,
		LeftAlt             = 342,
		LeftSuper           = 343,
		RightShift          = 344,
		RightControl        = 345,
		RightAlt            = 346,
		RightSuper          = 347,
		Menu                = 348
	} Key;

	inline std::ostream& operator<<(std::ostream& os, KeyCode keyCode)
	{
		os << static_cast<int32_t>(keyCode);
		return os;
	}
}

// From glfw3.h
#define BT_KEY_SPACE           ::Beta::Key::Space
#define BT_KEY_APOSTROPHE      ::Beta::Key::Apostrophe    /* ' */
#define BT_KEY_COMMA           ::Beta::Key::Comma         /* , */
#define BT_KEY_MINUS           ::Beta::Key::Minus         /* - */
#define BT_KEY_PERIOD          ::Beta::Key::Period        /* . */
#define BT_KEY_SLASH           ::Beta::Key::Slash         /* / */
#define BT_KEY_0               ::Beta::Key::D0
#define BT_KEY_1               ::Beta::Key::D1
#define BT_KEY_2               ::Beta::Key::D2
#define BT_KEY_3               ::Beta::Key::D3
#define BT_KEY_4               ::Beta::Key::D4
#define BT_KEY_5               ::Beta::Key::D5
#define BT_KEY_6               ::Beta::Key::D6
#define BT_KEY_7               ::Beta::Key::D7
#define BT_KEY_8               ::Beta::Key::D8
#define BT_KEY_9               ::Beta::Key::D9
#define BT_KEY_SEMICOLON       ::Beta::Key::Semicolon     /* ; */
#define BT_KEY_EQUAL           ::Beta::Key::Equal         /* = */
#define BT_KEY_A               ::Beta::Key::A
#define BT_KEY_B               ::Beta::Key::B
#define BT_KEY_C               ::Beta::Key::C
#define BT_KEY_D               ::Beta::Key::D
#define BT_KEY_E               ::Beta::Key::E
#define BT_KEY_F               ::Beta::Key::F
#define BT_KEY_G               ::Beta::Key::G
#define BT_KEY_H               ::Beta::Key::H
#define BT_KEY_I               ::Beta::Key::I
#define BT_KEY_J               ::Beta::Key::J
#define BT_KEY_K               ::Beta::Key::K
#define BT_KEY_L               ::Beta::Key::L
#define BT_KEY_M               ::Beta::Key::M
#define BT_KEY_N               ::Beta::Key::N
#define BT_KEY_O               ::Beta::Key::O
#define BT_KEY_P               ::Beta::Key::P
#define BT_KEY_Q               ::Beta::Key::Q
#define BT_KEY_R               ::Beta::Key::R
#define BT_KEY_S               ::Beta::Key::S
#define BT_KEY_T               ::Beta::Key::T
#define BT_KEY_U               ::Beta::Key::U
#define BT_KEY_V               ::Beta::Key::V
#define BT_KEY_W               ::Beta::Key::W
#define BT_KEY_X               ::Beta::Key::X
#define BT_KEY_Y               ::Beta::Key::Y
#define BT_KEY_Z               ::Beta::Key::Z
#define BT_KEY_LEFT_BRACKET    ::Beta::Key::LeftBracket   /* [ */
#define BT_KEY_BACKSLASH       ::Beta::Key::Backslash     /* \ */
#define BT_KEY_RIGHT_BRACKET   ::Beta::Key::RightBracket  /* ] */
#define BT_KEY_GRAVE_ACCENT    ::Beta::Key::GraveAccent   /* ` */
#define BT_KEY_WORLD_1         ::Beta::Key::World1        /* non-US #1 */
#define BT_KEY_WORLD_2         ::Beta::Key::World2        /* non-US #2 */

/* Function keys */
#define BT_KEY_ESCAPE          ::Beta::Key::Escape
#define BT_KEY_ENTER           ::Beta::Key::Enter
#define BT_KEY_TAB             ::Beta::Key::Tab
#define BT_KEY_BACKSPACE       ::Beta::Key::Backspace
#define BT_KEY_INSERT          ::Beta::Key::Insert
#define BT_KEY_DELETE          ::Beta::Key::Delete
#define BT_KEY_RIGHT           ::Beta::Key::Right
#define BT_KEY_LEFT            ::Beta::Key::Left
#define BT_KEY_DOWN            ::Beta::Key::Down
#define BT_KEY_UP              ::Beta::Key::Up
#define BT_KEY_PAGE_UP         ::Beta::Key::PageUp
#define BT_KEY_PAGE_DOWN       ::Beta::Key::PageDown
#define BT_KEY_HOME            ::Beta::Key::Home
#define BT_KEY_END             ::Beta::Key::End
#define BT_KEY_CAPS_LOCK       ::Beta::Key::CapsLock
#define BT_KEY_SCROLL_LOCK     ::Beta::Key::ScrollLock
#define BT_KEY_NUM_LOCK        ::Beta::Key::NumLock
#define BT_KEY_PRINT_SCREEN    ::Beta::Key::PrintScreen
#define BT_KEY_PAUSE           ::Beta::Key::Pause
#define BT_KEY_F1              ::Beta::Key::F1
#define BT_KEY_F2              ::Beta::Key::F2
#define BT_KEY_F3              ::Beta::Key::F3
#define BT_KEY_F4              ::Beta::Key::F4
#define BT_KEY_F5              ::Beta::Key::F5
#define BT_KEY_F6              ::Beta::Key::F6
#define BT_KEY_F7              ::Beta::Key::F7
#define BT_KEY_F8              ::Beta::Key::F8
#define BT_KEY_F9              ::Beta::Key::F9
#define BT_KEY_F10             ::Beta::Key::F10
#define BT_KEY_F11             ::Beta::Key::F11
#define BT_KEY_F12             ::Beta::Key::F12
#define BT_KEY_F13             ::Beta::Key::F13
#define BT_KEY_F14             ::Beta::Key::F14
#define BT_KEY_F15             ::Beta::Key::F15
#define BT_KEY_F16             ::Beta::Key::F16
#define BT_KEY_F17             ::Beta::Key::F17
#define BT_KEY_F18             ::Beta::Key::F18
#define BT_KEY_F19             ::Beta::Key::F19
#define BT_KEY_F20             ::Beta::Key::F20
#define BT_KEY_F21             ::Beta::Key::F21
#define BT_KEY_F22             ::Beta::Key::F22
#define BT_KEY_F23             ::Beta::Key::F23
#define BT_KEY_F24             ::Beta::Key::F24
#define BT_KEY_F25             ::Beta::Key::F25

/* Keypad */
#define BT_KEY_KP_0            ::Beta::Key::KP0
#define BT_KEY_KP_1            ::Beta::Key::KP1
#define BT_KEY_KP_2            ::Beta::Key::KP2
#define BT_KEY_KP_3            ::Beta::Key::KP3
#define BT_KEY_KP_4            ::Beta::Key::KP4
#define BT_KEY_KP_5            ::Beta::Key::KP5
#define BT_KEY_KP_6            ::Beta::Key::KP6
#define BT_KEY_KP_7            ::Beta::Key::KP7
#define BT_KEY_KP_8            ::Beta::Key::KP8
#define BT_KEY_KP_9            ::Beta::Key::KP9
#define BT_KEY_KP_DECIMAL      ::Beta::Key::KPDecimal
#define BT_KEY_KP_DIVIDE       ::Beta::Key::KPDivide
#define BT_KEY_KP_MULTIPLY     ::Beta::Key::KPMultiply
#define BT_KEY_KP_SUBTRACT     ::Beta::Key::KPSubtract
#define BT_KEY_KP_ADD          ::Beta::Key::KPAdd
#define BT_KEY_KP_ENTER        ::Beta::Key::KPEnter
#define BT_KEY_KP_EQUAL        ::Beta::Key::KPEqual

#define BT_KEY_LEFT_SHIFT      ::Beta::Key::LeftShift
#define BT_KEY_LEFT_CONTROL    ::Beta::Key::LeftControl
#define BT_KEY_LEFT_ALT        ::Beta::Key::LeftAlt
#define BT_KEY_LEFT_SUPER      ::Beta::Key::LeftSuper
#define BT_KEY_RIGHT_SHIFT     ::Beta::Key::RightShift
#define BT_KEY_RIGHT_CONTROL   ::Beta::Key::RightControl
#define BT_KEY_RIGHT_ALT       ::Beta::Key::RightAlt
#define BT_KEY_RIGHT_SUPER     ::Beta::Key::RightSuper
#define BT_KEY_MENU            ::Beta::Key::Menu
