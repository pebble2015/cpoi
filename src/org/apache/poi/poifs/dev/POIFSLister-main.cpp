#include <org/apache/poi/poifs/dev/POIFSLister.hpp>

extern void init_jvm();
extern java::lang::StringArray* make_args(int args, char** argv);

int main(int argc, char** argv)
{
    init_jvm();
    
    ::poi::poifs::dev::POIFSLister::main(make_args(argc, argv));
    
    return 0;
}
