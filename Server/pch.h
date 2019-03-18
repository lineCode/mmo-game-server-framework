#ifndef PCH_H
#define PCH_H

//--------------------- for DEV_MODE
//#define _DEV_MODE_
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

#include <array>

#define		_NORETURN			[[noreturn]]
#define		_NODISCARD			[[nodiscard]]
#define		_DEPRECATED			[[deprecated]]
#define		_MAYBE_UNUSED		[[maybe_unused]]
#define		_FALLTHROUGH		[[fallthrough]]

namespace GLOBAL_UTIL {
	namespace BIT_CONVERTER
	{
		_NODISCARD BYTE MakeByteFromLeftAndRightByte(const BYTE inLeftByte, const BYTE inRightByte) noexcept;
		_NODISCARD BYTE GetLeft4Bit(const BYTE inByte) noexcept;
		_NODISCARD BYTE GetRight4Bit(const BYTE inByte) noexcept;
	}
	namespace ERROR_HANDLING {
		
		_NORETURN void ERROR_QUIT(const WCHAR *msg);
		/*_DEPRECATED*/ void ERROR_DISPLAY(const CHAR *msg);

		// 해당 static Function Array의 초기화는 GameServer의 생성자에서 이루어짐.
		static std::function<void(void)> errorRecvOrSendArr[2];
		//static std::function<void(void)> terminateClientConnectArr[2];
		inline void NotError(void) {};
		void HandleRecvOrSendError(void);
	}
}
#endif //PCH_H