/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@class NSDictionary, NSArray;

@interface TCFontFamily : NSObject {

	NSDictionary* _namesByLanguage;
	NSArray* _members;

}

@property (nonatomic,readonly) NSDictionary * namesByLanguage;              //@synthesize namesByLanguage=_namesByLanguage - In the implementation block
@property (nonatomic,readonly) NSArray * members;                           //@synthesize members=_members - In the implementation block
-(NSArray *)members;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)equivalentDictionary;
-(NSDictionary *)namesByLanguage;
-(id)englishName;
-(id)bestMatchForStyling:(TCFontStyling)arg1 ;
-(id)regularVariant:(BOOL)arg1 ;
-(BOOL)allFamilyIsBold;
-(id)weightVariantsOfFont:(id)arg1 ;
-(unsigned long long)boldFontIndexInWeightVariants:(id)arg1 ;
-(unsigned long long)regularFontIndexInWeightVariants:(id)arg1 ;
-(BOOL)traitsAreAdditive;
-(id)initWithNamesByLanguage:(id)arg1 members:(id)arg2 ;
-(id)memberForPSName:(id)arg1 ;
-(id)memberForFullName:(id)arg1 ;
-(BOOL)allFamilyIsItalic;
-(id)variantByTogglingItalicOfFont:(id)arg1 ;
-(id)variantByAddingBoldToFont:(id)arg1 ;
-(id)variantByRemovingBoldFromFont:(id)arg1 ;
-(BOOL)doesAnyNonBoldVariantExistForFont:(id)arg1 ;
@end

