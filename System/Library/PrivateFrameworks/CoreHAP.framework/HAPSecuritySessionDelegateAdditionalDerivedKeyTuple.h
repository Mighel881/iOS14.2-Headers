/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface HAPSecuritySessionDelegateAdditionalDerivedKeyTuple : NSObject {

	NSString* _name;
	NSData* _saltData;
	NSData* _infoData;

}

@property (nonatomic,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSData * saltData;              //@synthesize saltData=_saltData - In the implementation block
@property (nonatomic,readonly) NSData * infoData;              //@synthesize infoData=_infoData - In the implementation block
+(id)new;
-(id)init;
-(NSString *)name;
-(NSData *)saltData;
-(NSData *)infoData;
-(id)initWithName:(id)arg1 saltData:(id)arg2 infoData:(id)arg3 ;
@end

