/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFAQIScaleCategory : NSObject <NSCopying, NSSecureCoding> {

	NSString* _categoryName;
	NSString* _color;
	unsigned long long _categoryNumber;
	unsigned long long _categoryIndex;
	NSString* _localizedCategoryDescription;
	NSRange _range;

}

@property (nonatomic,copy) NSString * categoryName;                              //@synthesize categoryName=_categoryName - In the implementation block
@property (nonatomic,copy) NSString * color;                                     //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) unsigned long long categoryNumber;                  //@synthesize categoryNumber=_categoryNumber - In the implementation block
@property (assign,nonatomic) NSRange range;                                      //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned long long categoryIndex;                   //@synthesize categoryIndex=_categoryIndex - In the implementation block
@property (nonatomic,copy) NSString * localizedCategoryDescription;              //@synthesize localizedCategoryDescription=_localizedCategoryDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSRange)range;
-(void)setCategoryNumber:(unsigned long long)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setColor:(NSString *)arg1 ;
-(id)initWithCategoryIndex:(unsigned long long)arg1 localizedCategoryDescription:(id)arg2 ;
-(BOOL)isEqualToScaleCategory:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)categoryIndex;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
-(void)setLocalizedCategoryDescription:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedCategoryDescription;
-(unsigned long long)categoryNumber;
-(NSString *)color;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCategoryIndex:(unsigned long long)arg1 ;
@end
