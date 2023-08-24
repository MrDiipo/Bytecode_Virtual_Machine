
#ifndef BYTECODE_VIRTUAL_MACHINE_COMPILER_H
#define BYTECODE_VIRTUAL_MACHINE_COMPILER_H

#include "vm.h"
#include "object.h"

ObjFunction* compile(const char* source);
void markCompilerRoots();

#endif //BYTECODE_VIRTUAL_MACHINE_COMPILER_H
