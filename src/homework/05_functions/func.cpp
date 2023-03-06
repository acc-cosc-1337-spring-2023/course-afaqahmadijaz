#include "func.h"
#include <string>

double get_gc_content(const std::string& dna)   {
    int gc_count = 0;
    for (char c : dna)  {
        if (c == 'G' || c == 'C')   {
            gc_count++;
        }
    }
    return (double) gc_count / dna.length() * 100.0;
}

std::string get_dna_complement(std::string dna) {
    for (std::string::size_type i = 0; i < dna.length() / 2; i++)  {
        char temp = dna[i];
        dna[i] = dna[dna.length() - i - 1];
        dna[dna.length() - i - 1] = temp;
    }
    for (char& c : dna) {
        switch (c) {
            case 'A':
                c = 'T';
                break;
            case 'T':
                c = 'A';
                break;
            case 'C':
                c = 'G';
                break;
            case 'G':
                c = 'C';
                break;
            default:
            break;
        }
    }
    return dna;
}

std::string reverse_string(std::string dna) {
    for (std::string::size_type i = 0; i < dna.length() / 2; i++)   {
        char temp = dna[i];
        dna[i] = dna[dna.length() - i - 1];
        dna[dna.length() - i - 1] = temp;
    }
    return dna;
}