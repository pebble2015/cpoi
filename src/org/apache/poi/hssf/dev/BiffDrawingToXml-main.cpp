#include <org/apache/poi/hssf/dev/BiffDrawingToXml.hpp>

extern void init_jvm();
extern java::lang::StringArray* make_args(int args, char** argv);

int main(int argc, char** argv)
{
    init_jvm();
    
    ::poi::hssf::dev::BiffDrawingToXml::main(make_args(argc, argv));
    
    return 0;
}
