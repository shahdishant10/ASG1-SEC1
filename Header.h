/**  
    CS700 ASSIGNMENT 1 SECTION 1
    DISHANT SHAH
    DUE DATE :- 2 OCT 2022
**/

#include <iostream>      //for including input output stream function
#include <fstream>       //for including file stream function
#include <cstring>       
#include <regex>         // provides a regular expression
#include<string>         ////for including the string functions

using namespace std;

/** 
   @brief return if the character is number or not 
   @param varaible of string type
   @return boolean value
**/
bool isNumber(string x)
{
    regex e ("\\d+");
    if (regex_match (x,e))
        return true;
    else
        return false;
}

/**
    @brief Returns the average of each student.
    @param variableOne The array of marks.
    @param variabletwo number of exams.
    @return Average in float type.
*/
float Average(int arr[], int n)
{
    int total = 0;
    float avgg;
    for (int i =0; i < n; i++)
    {

        total = total + arr[i];
        avgg = (float)total / n;                                            //for typecasting  average to float type.
    }
    return avgg;
}

/**
    @brief returns the grade of student according the marks
    @param variable of float datatype
    @return grade in the form of string
**/
string studentgrade(float a)          //It is use to grade the student on the basis of the average. It take Average of the student as input and return grade as output
{

    if (a >= 95 && a <= 100)
        return "A";
    else if (a >= 91.67 && a < 95)
        return "A-";
    else if (a >= 88.3 && a < 91.67)
        return "B+";
    else if (a >= 85 && a < 88.3)
        return "B";
    else if (a >= 81.67 && a < 85)
        return "B-";
    else if (a >= 78.33 && a < 81.67)
        return "C+";
    else if (a >= 75 && a < 78.33)
        return "C";
    else if (a >= 71.67 && a < 75)
        return "C-";
    else if (a >= 68.33 && a < 71.67)
        return "D+";
    else if (a >= 65 && a < 68.33)
        return "D";
    else if (a >= 61.67 && a < 65)
        return "D-";
    else if (a >= 0 && a < 61.67)
        return "F";
    else
        return "Invalid Grade";
}
