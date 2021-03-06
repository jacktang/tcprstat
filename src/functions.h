/**
 *   tcprstat -- Extract stats about TCP response times
 *   Copyright (C) 2010  Ignacio Nin
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc.,
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
**/

#if !defined(FUNCTIONS_H)
#define FUNCTIONS_H

#include <stdio.h>

#define C_NONE "\033[0m"
#define C_RED "\033[31m"
#define C_GREEN "\033[32m"
#define C_PURPLE "\033[35m"
#define C_YELLOW "\033[33m"

#define LOGGER(level, ...) do { \
    _log_raw_string(__FILE__, __LINE__, level, __VA_ARGS__); \
} while(0)

typedef enum {
    DEBUG, INFO, NOTICE, WARNING, ERROR
}LOGGER_LEVEL;


int dump_usage(FILE *stream);
int dump_help(FILE *stream);
int dump_version(FILE *stream);
void _log_raw_string(const char *file, int line, LOGGER_LEVEL level, const char *fmt, ...);

#endif
