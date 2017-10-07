#include <org/apache/poi/poifs/macros/VBAMacroExtractor.hpp>

extern void init_jvm();
extern java::lang::StringArray* make_args(int args, char** argv);

int main(int argc, char** argv)
{
    init_jvm();
    
    ::org::apache::poi::poifs::macros::VBAMacroExtractor::main(make_args(argc, argv));
    
    return 0;
}
