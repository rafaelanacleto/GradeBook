//GradeBook.h
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "GradeBook.h" //inclui a definição de classe gradebook

//Construtor da classe GradeBook
GradeBook::GradeBook(string nam)
{
    setCourseName(nam);
    aCount = 0;
    bCount = 0;
    cCount = 0;
    dCount = 0;
    fCount = 0;
}

void GradeBook::setCourseName(string name)
{
    courseName = name;
}

string GradeBook::getCourseName()
{
    return courseName;
}

void GradeBook::displayMessage()
{
    cout << "Hello " <<  getCourseName() << endl;
}

// insere número arbitrário de notas fornecidas pelo usuário; atualiza o contador de notas
void GradeBook::inputGrades()
{
    int grade;

    cout << "Enter com a letra da grade " << endl
        << "Entre com enter para terminar o input" << endl;


    while((grade = cin.get() != EOF))
    {
        //determina qual nota inserida
        switch(grade)
        {
            case 'A':
            case 'a':
                aCount++;
                break;
            case 'B':
            case 'b':
                bCount++;
                break;
            case 'C':
            case 'c':
                cCount++;
                break;
            case 'D':
            case 'd':
                dCount++;
                break;
            case 'F':
            case 'f':
                fCount++;
                break;
        }
    }
}

void GradeBook::displayGradeReport()
{
    //gera saida do report
    cout << "\n Nmero de estudantes por notas"
        << "\nA: " << aCount
        << "\nB: " << bCount
        << "\nC: " << cCount
        << "\nD: " << dCount
        << "\nF: " << fCount
        << endl;
}

void GradeBook::determineClassAverage()
{
    int total;
    int countGrade;
    int grade;
    double media;

    //Fase de inicialização
    total = 0;
    countGrade = 0;

    //fase de processamento
    cout << "Enter grade or –1 to quit: ";
    cin >> grade;

    while(grade != -1)
    {
        total = total + grade;
        countGrade++;

        cout << "Enter grade or –1 to quit: ";
        cin >> grade;
    }

    //fase de termino
    if(countGrade != 0)
    {
        media = static_cast<double>(total) / countGrade;
        // average = static_cast< double >( total ) / gradeCounter;

        //exibe o total e a  media
        cout << "O total foi " << total << endl;
        cout << "A media foi " << setprecision( 2 ) << fixed << media << endl;
    }
    else{
        cout << "Nenhuma nota inserida" << endl;
    }

}
