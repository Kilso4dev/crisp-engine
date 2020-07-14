#include "logging.h"

const debug_lvl DEBUG_VERBOSE = {.id = 0x1 << 1, .name = "VERBOSE", .color_code = "\033[0;37m"};       
const debug_lvl DEBUG_INFO = {.id = 0x1 << 2, .name = "INFO", .color_code = "\033[0;36m"};             
const debug_lvl DEBUG_WARNING = {.id = 0x1 << 3, .name = "WARNING", .color_code = "\033[0;33m"};       
const debug_lvl DEBUG_ERROR = {.id = 0x1 << 4, .name = "ERROR", .color_code = "\033[0;31m"};           

#define DEBUG_LVL DEBUG_VERBOSE

#ifdef LOG_DEBUG

int logm(const debug_lvl level, const char *str, ...) {
    struct timespec time_unix;                                                                         
    clock_gettime(CLOCK_REALTIME, &time_unix);                                                         
    if (level.id >= DEBUG_LVL.id) {                                                                    
        struct tm *tm = localtime(&time_unix.tv_sec);                                                  
                                                                                                       
        va_list args;                                                                                  
        va_start(args, str);                                                                           
                                                                                                      
        fprintf(stderr, "[%4d-%02d-%02d  %2d:%02d:%02d] [%s%-10s\033[0m]\t",                     
        tm->tm_year + 1900,                                                                            
        tm->tm_mon + 1,                                                                                
        tm->tm_mday,                                                                                   
        tm->tm_hour,                                                                                   
        tm->tm_min,                                                                                    
        tm->tm_sec,                                                                                    
        level.color_code.c_str(), level.name.c_str());

                                                                                                       
        int ret = vfprintf(stderr, str, args);                                                         
        fprintf(stderr, "\n");                                                                         
        va_end(args);                                                                                  
        return ret;                                                                                    
    }                                                                                                  
    return 0;                                                                                          
}

#else // Log DEBUG
int logm(const debug_lvl level, const char *str, ...) {
	return 0;
}

#endif // Log DEBUG