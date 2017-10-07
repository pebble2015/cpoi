// Generated from /POI/java/org/apache/poi/ss/util/WorkbookUtil.java
#include <org/apache/poi/ss/util/WorkbookUtil.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::util::WorkbookUtil::WorkbookUtil(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::WorkbookUtil::WorkbookUtil()
    : WorkbookUtil(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String* org::apache::poi::ss::util::WorkbookUtil::createSafeSheetName(::java::lang::String* nameProposal)
{
    clinit();
    return createSafeSheetName(nameProposal, u' ');
}

java::lang::String* org::apache::poi::ss::util::WorkbookUtil::createSafeSheetName(::java::lang::String* nameProposal, char16_t replaceChar)
{
    clinit();
    if(nameProposal == nullptr) {
        return u"null"_j;
    }
    if(npc(nameProposal)->length() < 1) {
        return u"empty"_j;
    }
    auto const length = ::java::lang::Math::min(int32_t(31), npc(nameProposal)->length());
    auto const shortenname = npc(nameProposal)->substring(0, length);
    auto const result = new ::java::lang::StringBuilder(shortenname);
    for (auto i = int32_t(0); i < length; i++) {
        auto ch = npc(result)->charAt(i);
        switch (ch) {
        case char16_t(0x0000):
        case u'\u0003':
        case u':':
        case u'/':
        case u'\\':
        case u'?':
        case u'*':
        case u']':
        case u'[':
            npc(result)->setCharAt(i, replaceChar);
            break;
        case u'\'':
            if(i == 0 || i == length - int32_t(1)) {
                npc(result)->setCharAt(i, replaceChar);
            }
            break;
        default: { }
        }

    }
    return npc(result)->toString();
}

void org::apache::poi::ss::util::WorkbookUtil::validateSheetName(::java::lang::String* sheetName)
{
    clinit();
    if(sheetName == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"sheetName must not be null"_j);
    }
    auto len = npc(sheetName)->length();
    if(len < 1 || len > 31) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"sheetName '"_j)->append(sheetName)
            ->append(u"' is invalid - character count MUST be greater than or equal to 1 and less than or equal to 31"_j)->toString());
    }
    for (auto i = int32_t(0); i < len; i++) {
        auto ch = npc(sheetName)->charAt(i);
        switch (ch) {
        case u'/':
        case u'\\':
        case u'?':
        case u'*':
        case u']':
        case u'[':
        case u':':
            break;
        default:
            continue;
        }

        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid char ("_j)->append(ch)
            ->append(u") found at index ("_j)
            ->append(i)
            ->append(u") in sheet name '"_j)
            ->append(sheetName)
            ->append(u"'"_j)->toString());
    }
    if(npc(sheetName)->charAt(int32_t(0)) == u'\'' || npc(sheetName)->charAt(len - int32_t(1)) == u'\'') {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid sheet name '"_j)->append(sheetName)
            ->append(u"'. Sheet names must not begin or end with (')."_j)->toString());
    }
}

void org::apache::poi::ss::util::WorkbookUtil::validateSheetState(int32_t state)
{
    clinit();
    switch (state) {
    case ::org::apache::poi::ss::usermodel::Workbook::SHEET_STATE_VISIBLE:
        break;
    case ::org::apache::poi::ss::usermodel::Workbook::SHEET_STATE_HIDDEN:
        break;
    case ::org::apache::poi::ss::usermodel::Workbook::SHEET_STATE_VERY_HIDDEN:
        break;
    default:
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid sheet state : "_j)->append(state)
            ->append(u"\n"_j)
            ->append(u"Sheet state must be one of the Workbook.SHEET_STATE_* constants"_j)->toString());
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::WorkbookUtil::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.WorkbookUtil", 35);
    return c;
}

java::lang::Class* org::apache::poi::ss::util::WorkbookUtil::getClass0()
{
    return class_();
}

