#include "decisions.h"
#include <string>

std::string get_letter_grade_using_if(int grade) {
    if(grade >= 90 && grade <= 100) {
        return "A";
        }
        else if(grade >= 80 && grade <= 89) {
            return "B";
            }
            else if(grade >= 70 && grade <= 79) {
                return "C";
                }
                else if(grade >= 60 && grade <= 69) {
                    return "D";
                    }
                    else if (grade >= 0 && grade <= 59) {
                        return "F";
                        }
                        else {
                            return "Invalid grade";
                            }
    }

std::string get_letter_grade_using_switch(int grade) {
    switch (grade / 10) {
        case 10:
        case 9:
        return "A";
        case 8:
        return "B";
        case 7:
        return "C";
        case 6:
        return "D";
        default:
        if (grade >= 0 && grade <= 59) {
            return "F";
            }
            else {
                return "Invalid grade";
                }
    }
}