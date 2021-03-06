/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSError;

@interface FCEntitlementsOverride : NSObject {

	NSArray* _entitlements;
	NSError* _error;

}

@property (nonatomic,copy) NSArray * entitlements;              //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,copy) NSError * error;                     //@synthesize error=_error - In the implementation block
-(void)setEntitlements:(NSArray *)arg1 ;
-(NSArray *)entitlements;
-(NSError *)error;
-(id)initWithEntitlements:(id)arg1 error:(id)arg2 ;
-(void)setError:(NSError *)arg1 ;
@end

