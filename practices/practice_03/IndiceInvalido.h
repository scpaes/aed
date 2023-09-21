//
// Created by scpaes on 9/21/23.
//

#ifndef PRACTICE_03_INDICEINVALIDO_H
#define PRACTICE_03_INDICEINVALIDO_H

#include "stdexcept"

class IndiceInvalido : public std::runtime_error {
public:
    IndiceInvalido() : std::runtime_error("Indice invalido") {}
};


#endif //PRACTICE_03_INDICEINVALIDO_H
