//
// Created by yuaii on 2025/3/20.
//

#ifndef LLVM_ENCODEFUNCTIONNAME_H
#define LLVM_ENCODEFUNCTIONNAME_H

#include "llvm/Pass.h"
namespace llvm{
Pass* createEncodeFunctionName(bool);
}

#endif // LLVM_ENCODEFUNCTIONNAME_H
