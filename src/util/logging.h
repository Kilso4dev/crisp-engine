#include <cstdio>
#include <cstdint>
#include <string>
#include <cstdarg>
#include <ctime>

#ifndef CRISP_OUTPUT_H
#define CRISP_OUTPUT_H

#define LOG_DEBUG // Enable Debugging Log



typedef struct debug_lvl
{
	uint32_t id;
	std::string name;
	std::string color_code;
} debug_lvl;

extern const debug_lvl DEBUG_VERBOSE;
extern const debug_lvl DEBUG_INFO;
extern const debug_lvl DEBUG_WARNING;
extern const debug_lvl DEBUG_ERROR;

int logm(const debug_lvl level, const char *str, ...);

#endif //CRISP_OUTPUT_H