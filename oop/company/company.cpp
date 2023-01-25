#include "company.hpp"

using namespace std;

void Company::setNome(string nome)
{
    this->nome = nome;
}

string Company::getNome()
{
    return this->nome;
}

void Company::addDepartment(Department &d)
{
    this->departments.push_back(&d);
}
