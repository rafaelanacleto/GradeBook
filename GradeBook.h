// Figura 3.11: GradeBook.h
// Defini��o da classe GradeBook. Esse arquivo apresenta a interface p�blica de
// GradeBook sem revelar as implementa��es de fun��es-membro de GradeBook
// que s�o definidas em GradeBook.cpp.
#include <string> // a classe GradeBook utiliza a classe de string padr�o C++
using std::string;
// defini��o da classe GradeBook
class GradeBook
{
    public:
        GradeBook( string ); // construtor que inicializa courseName
        void setCourseName( string ); // fun��o que configura o nome do curso
        string getCourseName(); // fun��o que obt�m o nome do curso
        void displayMessage(); // fun��o que exibe uma mensagem de boas-vindas
        void determineClassAverage();  // determina m�dia da classe
        void inputGrades(); // insere numero de notas ao usuario
        void displayGradeReport(); // exibe relatorio baseado nas notas
    private:
        string courseName; // nome do curso para esse GradeBook
        int aCount;
        int bCount;
        int cCount;
        int dCount;
        int fCount;
}; // fim da classe GradeBook
