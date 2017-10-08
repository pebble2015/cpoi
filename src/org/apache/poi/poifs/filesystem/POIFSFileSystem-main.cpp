#include <org/apache/poi/poifs/filesystem/POIFSFileSystem.hpp>

extern void init_jvm();
extern java::lang::StringArray* make_args(int args, char** argv);

int main(int argc, char** argv)
{
    init_jvm();
    
    ::poi::poifs::filesystem::POIFSFileSystem::main(make_args(argc, argv));
    
    return 0;
}
