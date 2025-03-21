add_llvm_library( LLVMEncodeFunctionName
  EncodeFunctionsName.cpp

        ADDITIONAL_HEADER_DIRS
        ${LLVM_MAIN_INCLUDE_DIR}/llvm/Transforms
        ${LLVM_MAIN_INCLUDE_DIR}/llvm/Transforms/EncodeFunctionName

        DEPENDS
        intrinsics_gen
  )