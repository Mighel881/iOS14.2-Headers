/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HMCameraClipEncryptedDataContext : NSObject <NSCopying> {

	NSData* _initializationVector;
	NSData* _ciphertext;
	NSData* _tag;

}

@property (copy,readonly) NSData * initializationVector;              //@synthesize initializationVector=_initializationVector - In the implementation block
@property (copy,readonly) NSData * ciphertext;                        //@synthesize ciphertext=_ciphertext - In the implementation block
@property (copy,readonly) NSData * tag;                               //@synthesize tag=_tag - In the implementation block
@property (copy,readonly) NSData * dataRepresentation; 
-(id)initWithDataRepresentation:(id)arg1 ;
-(NSData *)dataRepresentation;
-(unsigned long long)hash;
-(id)initWithInitializationVector:(id)arg1 ciphertext:(id)arg2 tag:(id)arg3 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)initializationVector;
-(NSData *)tag;
-(NSData *)ciphertext;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

