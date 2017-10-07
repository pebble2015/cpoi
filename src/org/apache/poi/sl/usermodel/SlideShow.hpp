// Generated from /POI/java/org/apache/poi/sl/usermodel/SlideShow.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/io/Closeable.hpp>

struct org::apache::poi::sl::usermodel::SlideShow
    : public virtual ::java::io::Closeable
{
    virtual Slide* createSlide() /* throws(IOException) */ = 0;
    virtual ::java::util::List* getSlides() = 0;
    virtual MasterSheet* createMasterSheet() /* throws(IOException) */ = 0;
    virtual ::java::util::List* getSlideMasters() = 0;
    virtual Resources* getResources() = 0;
    virtual ::java::awt::Dimension* getPageSize() = 0;
    virtual void setPageSize(::java::awt::Dimension* pgsize) = 0;
    virtual ::java::util::List* getPictureData() = 0;
    virtual PictureData* addPicture(::int8_tArray* pictureData, PictureData_PictureType* format) /* throws(IOException) */ = 0;
    virtual PictureData* addPicture(::java::io::InputStream* is, PictureData_PictureType* format) /* throws(IOException) */ = 0;
    virtual PictureData* addPicture(::java::io::File* pict, PictureData_PictureType* format) /* throws(IOException) */ = 0;
    virtual PictureData* findPictureData(::int8_tArray* pictureData) = 0;
    virtual void write(::java::io::OutputStream* out) /* throws(IOException) */ = 0;

    // Generated
    static ::java::lang::Class *class_();
};
