#pragma once
#include <windows.h>
#include <memory>

namespace key {
	struct registry_deleter {
		const void operator( )(const HKEY key) noexcept {
			RegCloseKey(key);
		}
	};

	using hkey = std::unique_ptr<std::remove_pointer_t<HKEY>, registry_deleter>;
}