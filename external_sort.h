#include <algorithm>
#include <chrono>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdio>
#include <cmath>

struct data {
	std::string last_name;
	std::string first_name;
	size_t year;
};

inline auto external_sort(std::string const file_name, const std::string output_name, uint_fast64_t const memory_size) -> void;

inline auto file_size(const std::string filename)->uint_fast64_t;

inline auto gen_file(std::string file_name, uint_fast64_t file_size) -> void;

inline auto to_string(size_t sz) -> std::string;

inline auto merge_files(std::ifstream & first_file, std::ifstream & second_file, std::ofstream & sorted) -> void;