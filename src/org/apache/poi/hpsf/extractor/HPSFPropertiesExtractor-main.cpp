#include <org/apache/poi/hpsf/extractor/HPSFPropertiesExtractor.hpp>

extern void init_jvm();
extern java::lang::StringArray* make_args(int args, char** argv);

int main(int argc, char** argv)
{
    init_jvm();
    
    ::org::apache::poi::hpsf::extractor::HPSFPropertiesExtractor::main(make_args(argc, argv));
    
    return 0;
}
