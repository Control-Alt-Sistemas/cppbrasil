/*
Copyright 2022 João Elson
jetmorju@gmail.com

Web-site: https://cppbrasil.com.br

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/


#ifndef ENDEREMIT_H
#define ENDEREMIT_H

#include <QString>
#include <CppBrasil/cppbrasil_global.h>

class CPPBRASIL_EXPORT EnderEmit
{
public:
    EnderEmit();
    ~EnderEmit();
    void clear();
    QString get_xLgr() const;
    void set_xLgr(const QString &xLgr);
    int get_nro() const;
    void set_nro(const int &nro);
    QString get_xCpl() const;
    void set_xCpl(const QString &xCpl);
    QString get_xBairro() const;
    void set_xBairro(const QString &xBairro);
    int get_cMun() const;
    void set_cMun(const int &cMun);
    QString get_xMun() const;
    void set_xMun(const QString &xMun);
    QString get_UF() const;
    void set_UF(const QString &UF);
    int get_CEP() const;
    void set_CEP(const int &CEP);
    int get_cPais() const;
    void set_cPais(const int &cPais);
    QString get_xPais() const;
    void set_xPais(const QString &xPais);
    QString get_fone() const;
    void set_fone(const QString &fone);

private:
    QString m_xLgr;
    int m_nro;
    QString m_xCpl;
    QString m_xBairro;
    int m_cMun;
    QString m_xMun;
    QString m_UF;
    int m_CEP;
    int m_cPais;
    QString m_xPais;
    QString m_fone;

};

#endif // ENDEREMIT_H
