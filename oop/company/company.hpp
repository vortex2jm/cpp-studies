#ifndef company_h
#define company_h
#include <string>
#include <list>
#include "department.hpp"

using namespace std;

class Company{

    string nome;
    list<Department*> departments;
    
    public:
    void setNome(string nome);
    string getNome();
    void addDepartment(Department &d);
};

#endif
