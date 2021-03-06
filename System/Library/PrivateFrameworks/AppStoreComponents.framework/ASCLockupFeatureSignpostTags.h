/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/ASCLockupFeature.h>

@class NSSet, NSString;

@interface ASCLockupFeatureSignpostTags : NSObject <ASCLockupFeature> {

	NSSet* _signpostTags;

}

@property (nonatomic,copy,readonly) NSSet * signpostTags;              //@synthesize signpostTags=_signpostTags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSignpostTags:(id)arg1 ;
-(NSSet *)signpostTags;
@end

