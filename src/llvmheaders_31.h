
#include "llvm/DerivedTypes.h"
#include "llvm/LLVMContext.h"
#include "llvm/Module.h"
#include "llvm/Support/IRBuilder.h"
#include "llvm/Target/TargetData.h"
#include "llvm/Instructions.h"
#include "llvm/CallGraphSCCPass.h"
#include "llvm/IntrinsicInst.h"
#include "llvm/InlineAsm.h"
#include "llvm/Analysis/DIBuilder.h"
#include "llvm/Analysis/DebugInfo.h"
#include "llvm/Analysis/Verifier.h"
#include "llvm/Linker.h"
#include "llvm/Support/system_error.h"
#include "llvm/Support/CFG.h"

#include "clang/Rewrite/Rewriter.h"
#include "clang/Rewrite/Rewriters.h"

#define LLVM_PATH_TYPE sys::Path
#define RAW_FD_OSTREAM_NONE 0
#define RAW_FD_OSTREAM_BINARY raw_fd_ostream::F_Binary
#define HASFNATTR(attr) hasFnAttr(Attribute :: attr)
#define ADDFNATTR(attr) addFnAttr(Attribute :: attr)
#define ATTRIBUTE Attribute
#define TARGETDATA(nm) nm##TargetData