/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface MRCryptoPairingIdentity : NSObject {

	NSString* _identifier;
	NSData* _publicKey;
	NSData* _privateKey;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSData * publicKey;                 //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) NSData * privateKey;                //@synthesize privateKey=_privateKey - In the implementation block
-(NSData *)publicKey;
-(id)init;
-(NSString *)identifier;
-(NSData *)privateKey;
-(id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 ;
@end

