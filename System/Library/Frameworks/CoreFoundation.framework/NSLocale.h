/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>

@property (readonly) long long _calendarDirection; 
+(id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
+(id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(void)registerPreferredLanguage:(id)arg1 usage:(unsigned long long)arg2 confidence:(float)arg3 ;
+(void)setPreferredLanguages:(id)arg1 ;
+(void)_setPreferredMeasurementSystem:(id)arg1 ;
+(id)_preferredMeasurementSystem;
+(id)autoupdatingCurrentLocale;
+(id)__effectiveLanguageForBundle:(id)arg1 ;
+(void)_setPreferredTemperatureUnit:(id)arg1 ;
+(id)_preferredTemperatureUnit;
+(id)_deviceLanguage;
+(id)preferredLocale;
+(id)systemLanguages;
+(id)systemLocale;
+(id)ISOCountryCodes;
+(id)ISOLanguageCodes;
+(id)ISOCurrencyCodes;
+(id)currentLocale;
+(id)commonISOCurrencyCodes;
+(id)internetServicesRegion;
+(id)canonicalLocaleIdentifierFromString:(id)arg1 ;
+(unsigned long long)characterDirectionForLanguage:(id)arg1 ;
+(id)availableLocaleIdentifiers;
+(id)canonicalLanguageIdentifierFromString:(id)arg1 ;
+(id)componentsFromLocaleIdentifier:(id)arg1 ;
+(id)localeIdentifierFromWindowsLocaleCode:(unsigned)arg1 ;
+(unsigned)windowsLocaleCodeFromLocaleIdentifier:(id)arg1 ;
+(unsigned long long)lineDirectionForLanguage:(id)arg1 ;
+(id)localeWithLocaleIdentifier:(id)arg1 ;
+(id)localeIdentifierFromComponents:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)preferredLanguages;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(long long)_calendarDirection;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)_prefs;
-(id)currencyCode;
-(id)variantCode;
-(id)scriptCode;
-(id)languageCode;
-(id)localeIdentifier;
-(id)objectForKey:(id)arg1 ;
-(id)groupingSeparator;
-(id)currencySymbol;
-(id)localizedStringForAlternateQuotationEndDelimiter:(id)arg1 ;
-(id)decimalSeparator;
-(id)localizedStringForQuotationBeginDelimiter:(id)arg1 ;
-(BOOL)usesMetricSystem;
-(id)localizedStringForCurrencySymbol:(id)arg1 ;
-(id)localizedStringForAlternateQuotationBeginDelimiter:(id)arg1 ;
-(id)collationIdentifier;
-(id)alternateQuotationBeginDelimiter;
-(id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2 ;
-(id)localizedStringForQuotationEndDelimiter:(id)arg1 ;
-(id)quotationEndDelimiter;
-(id)exemplarCharacterSet;
-(id)collatorIdentifier;
-(id)localizedStringForGroupingSeparator:(id)arg1 ;
-(id)localizedStringForCountryCode:(id)arg1 ;
-(id)localizedStringForVariantCode:(id)arg1 ;
-(id)alternateQuotationEndDelimiter;
-(id)localizedStringForCalendarIdentifier:(id)arg1 ;
-(id)localizedStringForCollatorIdentifier:(id)arg1 ;
-(id)localizedStringForLanguageCode:(id)arg1 ;
-(id)localizedStringForCurrencyCode:(id)arg1 ;
-(id)localizedStringForCollationIdentifier:(id)arg1 ;
-(id)quotationBeginDelimiter;
-(id)localizedStringForLocaleIdentifier:(id)arg1 ;
-(id)localizedStringForDecimalSeparator:(id)arg1 ;
-(id)localizedStringForScriptCode:(id)arg1 ;
-(id)displayNameForKey:(id)arg1 value:(id)arg2 ;
-(unsigned long long)_cfTypeID;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)init;
-(unsigned char)_nullLocale;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)identifier;
-(id)calendarIdentifier;
-(id)countryCode;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setNullLocale;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
