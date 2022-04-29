/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <stdarg.h>
#include <touchgfx/TextProvider.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/TypedText.hpp>
#include <touchgfx/Unicode.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <texts/TypedTextDatabase.hpp>

uint16_t touchgfx::Font::getStringWidth(const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(TEXT_DIRECTION_LTR, text, pArg);
    va_end(pArg);
    return width;
}

uint16_t touchgfx::Font::getStringWidth(touchgfx::TextDirection textDirection, const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(textDirection, text, pArg);
    va_end(pArg);
    return width;
}

touchgfx::Unicode::UnicodeChar touchgfx::TextProvider::getNextLigature(TextDirection direction)
{
    if (fontGsubTable && nextCharacters.peekChar())
    {
        substituteGlyphs();
        if (nextCharacters.peekChar(1) == 0x093F) // Hindi I-matra
        {
            nextCharacters.replaceAt1(nextCharacters.peekChar());
            nextCharacters.replaceAt0(0x093F);
        }
    }
    return getNextChar();
}

void touchgfx::TextProvider::initializeInternal()
{
    fillInputBuffer();
}

void touchgfx::LCD::drawString(touchgfx::Rect widgetArea, const touchgfx::Rect& invalidatedArea, const touchgfx::LCD::StringVisuals& stringVisuals, const touchgfx::Unicode::UnicodeChar* format, ...)
{
    va_list pArg;
    va_start(pArg, format);
    drawStringLTR(widgetArea, invalidatedArea, stringVisuals, format, pArg);
    va_end(pArg);
}

//Default typed text database
extern const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[];

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const touchgfx::Unicode::UnicodeChar texts_all_languages[] TEXT_LOCATION_FLASH_ATTRIBUTE = {
    0x41, 0x69, 0x72, 0x20, 0x43, 0x6f, 0x6e, 0x64, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x72, 0x0, // @0 "Air Conditioner"
    0x54, 0x45, 0x4d, 0x50, 0x20, 0x3a, 0x20, 0x2, 0x0, // @16 "TEMP : <>"
    0x50, 0x68, 0x6f, 0x6e, 0x65, 0x20, 0x4e, 0x75, 0x6d, 0x62, 0x65, 0x72, 0x0, // @25 "Phone Number"
    0x53, 0x45, 0x52, 0x56, 0x49, 0x43, 0x45, 0x20, 0x43, 0x41, 0x4c, 0x4c, 0x0, // @38 "SERVICE CALL"
    0x53, 0x45, 0x52, 0x5f, 0x46, 0x55, 0x4e, 0x43, 0x54, 0x49, 0x4f, 0x4e, 0x0, // @51 "SER_FUNCTION"
    0x58, 0x20, 0x46, 0x75, 0x63, 0x6e, 0x74, 0x69, 0x6f, 0x6e, 0x0, // @64 "X Fucntion"
    0x4b, 0x49, 0x54, 0x43, 0x48, 0x45, 0x4e, 0x0, // @75 "KITCHEN"
    0x4c, 0x41, 0x55, 0x4e, 0x44, 0x52, 0x59, 0x0, // @83 "LAUNDRY"
    0x53, 0x45, 0x54, 0x54, 0x49, 0x4e, 0x47, 0x0, // @91 "SETTING"
    0x53, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x0, // @99 "Service"
    0x43, 0x4c, 0x45, 0x41, 0x4e, 0x0, // @107 "CLEAN"
    0x4c, 0x69, 0x67, 0x68, 0x74, 0x0, // @113 "Light"
    0x42, 0x41, 0x43, 0x4b, 0x0, // @119 "BACK"
    0x42, 0x41, 0x54, 0x48, 0x0, // @124 "BATH"
    0x42, 0x61, 0x63, 0x6b, 0x0, // @129 "Back"
    0x44, 0x4f, 0x57, 0x4e, 0x0, // @134 "DOWN"
    0x48, 0x49, 0x47, 0x48, 0x0, // @139 "HIGH"
    0x53, 0x41, 0x56, 0x45, 0x0, // @144 "SAVE"
    0x54, 0x49, 0x4d, 0x45, 0x0, // @149 "TIME"
    0x42, 0x45, 0x44, 0x0, // @154 "BED"
    0x4c, 0x4f, 0x57, 0x0, // @158 "LOW"
    0x4d, 0x45, 0x44, 0x0, // @162 "MED"
    0x55, 0x50, 0x0 // @166 "UP"
};
TEXT_LOCATION_FLASH_PRAGMA
KEEP extern uint32_t const indicesGb[] TEXT_LOCATION_FLASH_ATTRIBUTE;

//array holding dynamically installed languages
struct TranslationHeader
{
    uint32_t offset_to_texts;
    uint32_t offset_to_indices;
    uint32_t offset_to_typedtext;
};
static const TranslationHeader* languagesArray[1] = { 0 };

//Compiled and linked in languages
static const uint32_t* const staticLanguageIndices[] = {
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
            // Dynamic translation is added
            const TranslationHeader* translation = languagesArray[id];
            currentLanguagePtr = (const touchgfx::Unicode::UnicodeChar*)(((const uint8_t*)translation) + translation->offset_to_texts);
            currentLanguageIndices = (const uint32_t*)(((const uint8_t*)translation) + translation->offset_to_indices);
            currentLanguageTypedText = (const touchgfx::TypedText::TypedTextData*)(((const uint8_t*)translation) + translation->offset_to_typedtext);
        }
        else
        {
            // Compiled and linked in languages
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
