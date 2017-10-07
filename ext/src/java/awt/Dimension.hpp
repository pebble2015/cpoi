// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/awt/geom/Dimension2D.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::awt::Dimension
    : public ::java::awt::geom::Dimension2D
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::awt::geom::Dimension2D super;
    int32_t height {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(4723952579491349524LL) };

public:
    int32_t width {  };

protected:
    void ctor();
    void ctor(Dimension* d);
    void ctor(int32_t width, int32_t height);

public:
    bool equals(::java::lang::Object* obj) override;
    double getHeight() override;
    virtual Dimension* getSize();
    double getWidth() override;
    int32_t hashCode() override;
    /*static void initIDs(); (private) */
    virtual void setSize(Dimension* d);
    void setSize(double width, double height) override;
    virtual void setSize(int32_t width, int32_t height);
    ::java::lang::String* toString() override;

    // Generated
    Dimension();
    Dimension(Dimension* d);
    Dimension(int32_t width, int32_t height);
protected:
    Dimension(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void setSize(::java::awt::geom::Dimension2D* d);

private:
    virtual ::java::lang::Class* getClass0();
};
