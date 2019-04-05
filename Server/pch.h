#ifndef PCH_H
#define PCH_H

//--------------------- for DEV_MODE
#define _DEV_MODE_
//---------------------

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#define _WINSOCK_DEPRECATED_NO_WARNINGS

#pragma comment(lib, "ws2_32")
#pragma comment(lib, "wininet.lib")
#include <WinSock2.h>

#include <iostream>

#include <cwchar>
#include <string>
#include <string_view>

#include <functional>
#include <optional>

#include <thread>
#include <mutex>

#include <array>
#include <vector>

#include <concurrent_queue.h>

#define		_NORETURN			[[noreturn]]
#define		_NODISCARD			[[nodiscard]]
#define		_DEPRECATED			[[deprecated]]
#define		_MAYBE_UNUSED		[[maybe_unused]]
#define		_FALLTHROUGH		[[fallthrough]]

#endif //PCH_H