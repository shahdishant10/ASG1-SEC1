/**  
    CS700 ASSIGNMENT 1 SECTION 1
    DISHANT SHAH
    DUE DATE :- 2 OCT 2022
**/


#include"Header.h"

int main()
{
    ifstream filein;                                                           //To read the input file
    ofstream fileout;                                                          //To write the file
    string line,word,fname,lname,mname;                                        //Variable declaration of string datatype
    float Avg;                                                                 //Variable declaration of float datatype
    string G;                                                                  //Variable declaration of string datatype
    int cnt,value;

    filein.open("grades.txt");                                                 //To read the input file grades.txt
    fileout.open("Result.txt");                                                //Output will be stored in result.txt
    if(!filein.is_open())                                                      //Loop if file does not open
    {
        cout<<"File Cant be Opened \n";
    return -1;
    }

   while(getline(filein,line))                                                 //Loop to read the file till the end of the file
    {
        istringstream in(line);
        in>>fname>>lname>>mname;
       if(isNumber(mname))
       {
           cnt=stoi(mname);
           mname=" ";
       }
       else
        in>>cnt;
int marks[cnt];
for(int i=0;i<cnt;i++)                                                         //To read the marks
{
    in>>value;
    marks[i]=value;
}
        Avg = Average(marks,cnt);                                             //To store average
        G = studentgrade(Avg);                                                //To store grade
        cout<< "Student Name is " <<fname<<" "<<lname<<" "<<mname <<" and number of exams are:- " <<cnt<< endl;
        cout<<"The marks for exams are :-"<<endl;
        for (int i = 0; i < cnt; i++)                                        //Loop to print marks in console
            cout << marks[i] << endl;

        cout << "OVERALL GRADE:- " << G << endl;                             //Overall grade is printed
        cout<< endl;
        fileout<< "Student Name is " <<fname<<" "<<lname<<" "<<mname <<" and number of exams are:- " <<cnt<< endl;
        fileout<<"The marks for exams are :-"<<endl;
        for (int i = 0; i < cnt; i++)                                        //Loop to print marks in file
        {
            fileout << marks[i] << endl;
        }
        fileout << "OVERALL GRADE:- " << G << endl;
        fileout<< endl;


    }

filein.close();                                                             //Close the file
fileout.close();

return 0;
}
