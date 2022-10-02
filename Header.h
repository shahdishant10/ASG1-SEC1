/**  
    CS700 ASSIGNMENT 1 SECTION 1
    DISHANT SHAH
    DUE DATE :- 2 OCT 2022
**/

#include <iostream>
#include <fstream>
#include <cstring>
#include <regex>
#include<string>
using namespace std;
bool isNumber(string x)
{
    regex e ("\\d+");
    if (regex_match (x,e))
        return true;
    else
        return false;
}
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
