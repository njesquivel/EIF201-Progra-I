/*
 * =====================================================================================
 *
 *       Filename:  MainAppValidations.cpp
 *
 *    Description:  Create and manipulate a GradeBook object.
 *                  Illustrate validation.
 *
 *        Created:  29/07/2019
 *
 *         Author:  Maikol Guzmán mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
#include <iostream>

#include "GradeBook.h"

int main(int argc, const char *argv[]) {
    GradeBook gradeBook1("CS101 Introduction to Programming in C++");
    GradeBook gradeBook2("CS102 C++ Data Structures");

    // display each GradeBook's courseName
    std::cout << "gradeBook1 initial course name: "
              << gradeBook1.getCourseName();
    std::cout << "\ngradeBook2 initial course name: "
              << gradeBook2.getCourseName() << std::endl;

    // modify myGradeBook's courseName (with a valid length string)
    gradeBook1.setCourseName("CS101 C++ Programming");

    // display each GradeBook's courseName
    std::cout << "\ngradeBook1 course name: " << gradeBook1.getCourseName();
    std::cout << "\ngradeBook2 course name: " << gradeBook2.getCourseName()
              << std::endl;
    return 0;
}
