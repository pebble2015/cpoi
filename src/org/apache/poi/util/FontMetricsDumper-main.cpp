#include <org/apache/poi/util/FontMetricsDumper.hpp>

extern void init_jvm();
extern java::lang::StringArray* make_args(int args, char** argv);

int main(int argc, char** argv)
{
    init_jvm();
    
    ::org::apache::poi::util::FontMetricsDumper::main(make_args(argc, argv));
    
    return 0;
}
