/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBTitleCardSection.h>
@class NSArray, NSString, _SFPBColor, NSData;


@protocol _SFPBTitleCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) BOOL isCentered; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(int)separatorStyle;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(void)setSeparatorStyle:(int)arg1;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(NSString *)subtitle;
-(id)initWithDictionary:(id)arg1;
-(void)setSubtitle:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(void)setType:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(NSArray *)punchoutOptions;
-(NSString *)title;
-(NSString *)type;
-(BOOL)isCentered;
-(void)setTitle:(id)arg1;
-(void)setIsCentered:(BOOL)arg1;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(BOOL)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(id)initWithJSON:(id)arg1;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, NSData;

@interface _SFPBTitleCardSection : PBCodable <_SFPBTitleCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _isCentered;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                         //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                    //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;              //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                              //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                           //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                              //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL isCentered;                                 //@synthesize isCentered=_isCentered - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)jsonData;
-(int)separatorStyle;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(void)setSeparatorStyle:(int)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(NSString *)subtitle;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(_SFPBColor *)backgroundColor;
-(NSArray *)punchoutOptions;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(NSString *)type;
-(BOOL)isCentered;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIsCentered:(BOOL)arg1 ;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
@end
