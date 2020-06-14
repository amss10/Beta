#pragma once

#include <iostream>
#include <memory>
#include <utility>
#include <algorithm>
#include <functional>

#include <string>
#include <sstream>
#include <array>
#include <vector>
#include <unordered_map>
#include <unordered_set>

#include "Beta/Core/Log.h"

#include "Beta/Debug/Instrumentor.h"

#ifdef BT_PLATFORM_WINDOWS
	#include <Windows.h>
#endif