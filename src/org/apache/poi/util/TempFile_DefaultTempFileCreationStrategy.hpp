// Generated from /POI/java/org/apache/poi/util/TempFile.java

#pragma once

#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/util/DefaultTempFileCreationStrategy.hpp>

struct default_init_tag;

class org::apache::poi::util::TempFile_DefaultTempFileCreationStrategy
    : public DefaultTempFileCreationStrategy
{

public:
    typedef DefaultTempFileCreationStrategy super;

    // Generated
    TempFile_DefaultTempFileCreationStrategy();
protected:
    TempFile_DefaultTempFileCreationStrategy(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class TempFile;
};
