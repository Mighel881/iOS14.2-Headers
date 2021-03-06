/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SBHLibraryCategoryIdentifier : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _hash;
	NSString* _localizedDisplayName;
	unsigned long long _predictionCategoryID;
	unsigned long long _predictionCategoryIndex;

}

@property (nonatomic,copy,readonly) NSString * localizedDisplayName;                    //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,readonly) unsigned long long predictionCategoryID;                 //@synthesize predictionCategoryID=_predictionCategoryID - In the implementation block
@property (nonatomic,readonly) unsigned long long predictionCategoryIndex;              //@synthesize predictionCategoryIndex=_predictionCategoryIndex - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)categoryWithLocalizedDisplayName:(id)arg1 categoryID:(unsigned long long)arg2 ;
+(id)categoryWithPredictionCategory:(id)arg1 categoryID:(unsigned long long)arg2 categoryIndex:(unsigned long long)arg3 ;
-(id)succinctDescription;
-(unsigned long long)hash;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)predictionCategoryID;
-(id)initWithLocalizedDisplayName:(id)arg1 predictionCategoryID:(unsigned long long)arg2 categoryIndex:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)predictionCategoryIndex;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDisplayName;
@end

