
#ifndef BYTECODE_VIRTUAL_MACHINE_VALUE_H
#define BYTECODE_VIRTUAL_MACHINE_VALUE_H

#include "common.h"

typedef enum {
    VAL_BOOL,
    VAL_NIL,
    VAL_NUMBER,
} ValueType;

typedef struct {
    ValueType  type;
    union {
        bool boolean;
        double number;
    } as;
};

typedef double Value;

typedef struct {
    int capacity;
    int count;
    Value* values;
} ValueArray;

void initValueArray(ValueArray* array);
void writeValueArray(ValueArray* array, Value value);
void freeValueArray(ValueArray* array);
void printValue(Value value);

#endif //BYTECODE_VIRTUAL_MACHINE_VALUE_H
