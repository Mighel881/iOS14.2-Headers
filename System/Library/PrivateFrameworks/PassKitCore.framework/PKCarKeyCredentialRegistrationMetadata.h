/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKCredentialRegistrationMetadata.h>

@class NSString;

@interface PKCarKeyCredentialRegistrationMetadata : PKCredentialRegistrationMetadata {

	NSString* _make;
	NSString* _model;
	long long _keyType;

}

@property (nonatomic,readonly) NSString * make;                //@synthesize make=_make - In the implementation block
@property (nonatomic,readonly) NSString * model;               //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) long long keyType;              //@synthesize keyType=_keyType - In the implementation block
-(NSString *)make;
-(NSString *)model;
-(long long)keyType;
-(id)initWithMake:(id)arg1 model:(id)arg2 keyType:(long long)arg3 ;
@end

