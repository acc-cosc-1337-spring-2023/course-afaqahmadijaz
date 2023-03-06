#ifndef FUNC_H
#define FUNC_H

#include <string>

double get_gc_content(const std::string& dna);
std::string get_dna_complement(std::string dna);
std::string reverse_string(std::string dna);

#endif