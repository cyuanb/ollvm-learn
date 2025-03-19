add_llvm_library( LLVMEncodeFunctionName MODULE 
  EncodeFunctionsName.cpp

  PLUGIN_TOOL
  opt
  )