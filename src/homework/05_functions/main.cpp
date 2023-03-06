#include <iostream>
#include <string>
#include "func.h"
#include "func.cpp"

int main()	{
	int choice;
	std::string dna;
    do	{
		std::cout << "Menu" << std::endl;
        std::cout << "1- Get GC Content" << std::endl;
        std::cout << "2- Get DNA Complement" << std::endl;
        std::cout << "3- Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice)	{
            case 1:
                std::cout << "Enter DNA string: ";
                std::cin >> dna;
                std::cout << "GC content: " << get_gc_content(dna) * 100 << "%" << std::endl;
                break;
            case 2:
                std::cout << "Enter DNA string: ";
                std::cin >> dna;
                std::cout << "DNA complement: " << get_dna_complement(dna) << std::endl;
                break;
            case 3:
                std::cout << "Exiting program..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while (choice != 3);
    return 0;
}
