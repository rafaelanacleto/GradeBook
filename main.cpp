#include <iostream>
#include <string> // o programa utiliza classe de string padrão C++
#include "GradeBook.h" //inclui a definição de classe gradebook

using std::string;
using std::getline;

using namespace std;

int main()
{
    GradeBook myGrade("Defalut");

    myGrade.displayMessage();
    myGrade.inputGrades();
    myGrade.displayGradeReport();

    return 0;
}
