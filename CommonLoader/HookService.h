#pragma once

#ifndef _WIN64
#define MIN_HOOK_LENGTH 5
#else
#define MIN_HOOK_LENGTH 14
#define MIN_HOOK_LENGTH_CALL_64 2
#endif


namespace CommonLoader
{
	enum HookBehavior
	{
		Before,
		After,
		Replace
	};
	
	enum HookParameter
	{
		Call,
		Jump
	};

	class HookService
	{
	public:
		static void WriteASMHook(const char* source, size_t address, int behavior = HookBehavior::After, int parameter = HookParameter::Jump);
	};
}
