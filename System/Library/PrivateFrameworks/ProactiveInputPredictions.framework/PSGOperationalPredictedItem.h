/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveInputPredictions/ProactiveInputPredictions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface PSGOperationalPredictedItem : NSObject <NSSecureCoding, NSCopying> {

	NSString* _itemIdentifier;
	NSString* _value;
	NSString* _bundleIdentifier;
	NSDictionary* _operationData;

}

@property (nonatomic,readonly) NSString * itemIdentifier;                 //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * value;                          //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * operationData;              //@synthesize operationData=_operationData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)itemIdentifier;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToItem:(id)arg1 ;
-(NSString *)value;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)operationData;
-(id)initWithItemIdentifier:(id)arg1 value:(id)arg2 bundleIdentifier:(id)arg3 operationData:(id)arg4 ;
@end
