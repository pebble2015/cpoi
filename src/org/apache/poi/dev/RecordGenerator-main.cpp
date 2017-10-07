#include <org/apache/poi/dev/RecordGenerator.hpp>

extern void init_jvm();
extern java::lang::StringArray* make_args(int args, char** argv);

int main(int argc, char** argv)
{
    init_jvm();
    
    ::org::apache::poi::dev::RecordGenerator::main(make_args(argc, argv));
    
    return 0;
}
