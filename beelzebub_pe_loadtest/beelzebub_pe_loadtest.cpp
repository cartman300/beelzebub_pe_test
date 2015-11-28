#include "stdafx.h"

int main() {
	uintptr_t volatile Addr = 0x30000;
	uintptr_t volatile End = Addr + Addr;

	do {
		for (uint8_t* Ptr = reinterpret_cast<uint8_t*>(Addr); (uintptr_t)Ptr < End; ++Ptr)
			++(*Ptr);
	} while (true);

	return 0;
}