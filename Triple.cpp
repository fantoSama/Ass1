//
// Created by Study on 08/11/2022.
//

#include "Triple.h"

Triple::Triple(unsigned int iVar, const Func &fThen, const Func &fElse) : m_ciVar(iVar), m_cThen(fThen), m_cElse(fElse) {}

bool operator<(const Triple &crArg1, const Triple &crArg2) {
    return false; // todo implement operator
}
