#ifndef BYTECODEVM_debug_h
#define BYTECODEVM_debug_h

#include "chunk.h"

void disassembleChunk(Chunk *chunk, const char *name);
int disassembleInstruction(Chunk *chunk, int offset);
#endif
