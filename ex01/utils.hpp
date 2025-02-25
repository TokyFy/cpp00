#pragma once

#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <iostream>
#include <iomanip>

#define BG_WHITE "\033[1m\033[47m\033[30m"
#define ITALIC "\033[3m"
#define GRAY "\033[38;5;245m"
#define RESET "\033[0m"
#define UNDERLINE "\033[4m"

void get_input(const std::string& prompts , std::string &buffer);
void str_trim(std::string &str);
void str_clear_space(std::string &str);

#endif
