/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <stdarg.h>
#include <touchgfx/Texts.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/TypedText.hpp>
#include <texts/TypedTextDatabase.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <touchgfx/TextProvider.hpp>

touchgfx::Font::StringWidthFunctionPointer touchgfx::Font::getStringWidthFunction = &touchgfx::Font::getStringWidthLTR;
touchgfx::LCD::DrawStringFunctionPointer touchgfx::LCD::drawStringFunction = &touchgfx::LCD::drawStringLTR;
touchgfx::TextProvider::UnicodeConverterInitFunctionPointer touchgfx::TextProvider::unicodeConverterInitFunction = static_cast<touchgfx::TextProvider::UnicodeConverterInitFunctionPointer>(0);
touchgfx::TextProvider::UnicodeConverterFunctionPointer touchgfx::TextProvider::unicodeConverterFunction = static_cast<touchgfx::TextProvider::UnicodeConverterFunctionPointer>(0);

//Default typed text database
extern const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[];

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const touchgfx::Unicode::UnicodeChar texts_all_languages[] TEXT_LOCATION_FLASH_ATTRIBUTE =
{
    0x2, 0x20, 0x56, 0x0, // @0 "<> V"
    0x2, 0x0, // @4 "<>"
    0x54, 0x52, 0x47, 0x54, 0x2e, 0x0, // @6 "TRGT."
    0x4c, 0x41, 0x4d, 0x42, 0x2e, 0x0, // @12 "LAMB."
    0x4f, 0x49, 0x4c, 0x50, 0x0, // @18 "OILP"
    0x4f, 0x49, 0x4c, 0x54, 0x0, // @23 "OILT"
    0x30, 0x2e, 0x38, 0x39, 0x0, // @28 "0.89"
    0x30, 0x2e, 0x38, 0x37, 0x0, // @33 "0.87"
    0x31, 0x34, 0x2e, 0x31, 0x0, // @38 "14.1"
    0x4b, 0x4d, 0x48, 0x0, // @43 "KMH"
    0x32, 0x35, 0x30, 0x0, // @47 "250"
    0x31, 0x32, 0x35, 0x0, // @51 "125"
    0x54, 0x50, 0x53, 0x0, // @55 "TPS"
    0x31, 0x31, 0x30, 0x0, // @59 "110"
    0x4b, 0x50, 0x41, 0x0, // @63 "KPA"
    0x49, 0x41, 0x54, 0x0, // @67 "IAT"
    0x45, 0x43, 0x54, 0x0, // @71 "ECT"
    0x31, 0x30, 0x30, 0x0, // @75 "100"
    0x43, 0x4c, 0x54, 0x0, // @79 "CLT"
    0x32, 0x31, 0x0, // @83 "21"
    0x32, 0x0, // @86 "2"
    0x33, 0x0, // @88 "3"
    0x34, 0x0, // @90 "4"
    0x36, 0x0, // @92 "6"
    0x38, 0x0 // @94 "8"
};
extern uint32_t const indicesGb[];

//array holding dynamically installed languages
struct TranslationHeader
{
    uint32_t offset_to_texts;
    uint32_t offset_to_indices;
    uint32_t offset_to_typedtext;
};
static const TranslationHeader* languagesArray[1] = { 0 };

//Compiled and linked in languages
static const uint32_t* const staticLanguageIndices[] =
{
    indicesGb
};

touchgfx::LanguageId touchgfx::Texts::currentLanguage = static_cast<touchgfx::LanguageId>(0);
static const touchgfx::Unicode::UnicodeChar* currentLanguagePtr = 0;
static const uint32_t* currentLanguageIndices = 0;

void touchgfx::Texts::setLanguage(touchgfx::LanguageId id)
{
    const touchgfx::TypedText::TypedTextData* currentLanguageTypedText = 0;
    if (id < 1)
    {
        if (languagesArray[id] != 0)
        {
            //dynamic translation is added
            const TranslationHeader* translation = languagesArray[id];
            currentLanguagePtr = (const touchgfx::Unicode::UnicodeChar*)(((const uint8_t*)translation) + translation->offset_to_texts);
            currentLanguageIndices = (const uint32_t*)(((const uint8_t*)translation) + translation->offset_to_indices);
            currentLanguageTypedText = (const touchgfx::TypedText::TypedTextData*)(((const uint8_t*)translation) + translation->offset_to_typedtext);
        }
        else
        {
            //compiled and linked in languages
            currentLanguagePtr = texts_all_languages;
            currentLanguageIndices = staticLanguageIndices[id];
            currentLanguageTypedText = typedTextDatabaseArray[id];
        }
    }

    if (currentLanguageTypedText)
    {
        currentLanguage = id;
        touchgfx::TypedText::registerTypedTextDatabase(currentLanguageTypedText,
                                                       TypedTextDatabase::getFonts(), TypedTextDatabase::getInstanceSize());
    }
}

void touchgfx::Texts::setTranslation(touchgfx::LanguageId id, const void* translation)
{
    languagesArray[id] = (const TranslationHeader*)translation;
}

const touchgfx::Unicode::UnicodeChar* touchgfx::Texts::getText(TypedTextId id) const
{
    return &currentLanguagePtr[currentLanguageIndices[id]];
}

