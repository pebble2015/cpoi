#include <org/apache/poi/poifs/eventfilesystem/POIFSReader.hpp>

extern void init_jvm();
extern java::lang::StringArray* make_args(int args, char** argv);

int main(int argc, char** argv)
{
    init_jvm();
    
    ::org::apache::poi::poifs::eventfilesystem::POIFSReader::main(make_args(argc, argv));
    
    return 0;
}
