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


#ifndef INFADIC_H
#define INFADIC_H

#include <memory>
#include <QString>
#include "container.h"
#include "obscont.h"
#include "obsfisco.h"
#include "procref.h"

#ifdef CPPBRASIL_STATIC
    class InfAdic
#else
    #include "cppbrasil_global.h"
    class CPPBRASIL_EXPORT InfAdic
#endif
{
public:
    InfAdic();
    ~InfAdic();
    void clear();
    QString get_infAdFisco() const;
    void set_infAdFisco(const QString &infAdFisco);
    QString get_infCpl() const;
    void set_infCpl(const QString &infCpl);

    std::shared_ptr<Container<ObsCont>> obsCont;
    std::shared_ptr<Container<ObsFisco>> obsFisco;
    std::shared_ptr<Container<ProcRef>> procRef;

private:
    QString m_infAdFisco;
    QString m_infCpl;

};

#endif // INFADIC_H
