// Generated from /POI/java/org/apache/poi/hssf/model/WorkbookRecordList.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::model::WorkbookRecordList final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::List* records {  };
    int32_t protpos {  };
    int32_t bspos {  };
    int32_t tabpos {  };
    int32_t fontpos {  };
    int32_t xfpos {  };
    int32_t backuppos {  };
    int32_t namepos {  };
    int32_t supbookpos {  };
    int32_t externsheetPos {  };
    int32_t palettepos {  };

public:
    void setRecords(::java::util::List* records);
    int32_t size();
    ::org::apache::poi::hssf::record::Record* get(int32_t i);
    void add(int32_t pos, ::org::apache::poi::hssf::record::Record* r);
    ::java::util::List* getRecords();
    void remove(::java::lang::Object* record);
    void remove(int32_t pos);
    int32_t getProtpos();
    void setProtpos(int32_t protpos);
    int32_t getBspos();
    void setBspos(int32_t bspos);
    int32_t getTabpos();
    void setTabpos(int32_t tabpos);
    int32_t getFontpos();
    void setFontpos(int32_t fontpos);
    int32_t getXfpos();
    void setXfpos(int32_t xfpos);
    int32_t getBackuppos();
    void setBackuppos(int32_t backuppos);
    int32_t getPalettepos();
    void setPalettepos(int32_t palettepos);
    int32_t getNamepos();
    int32_t getSupbookpos();
    void setNamepos(int32_t namepos);
    void setSupbookpos(int32_t supbookpos);
    int32_t getExternsheetPos();
    void setExternsheetPos(int32_t externsheetPos);

private:
    void updateRecordPos(int32_t pos, bool add);

    // Generated

public:
    WorkbookRecordList();
protected:
    void ctor();
    WorkbookRecordList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
