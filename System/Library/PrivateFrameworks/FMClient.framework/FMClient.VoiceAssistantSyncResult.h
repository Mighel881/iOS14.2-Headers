/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSString;

@interface FMClient.VoiceAssistantSyncResult : NSObject <NSSecureCoding> {

	 devices;
	 anchor;

}

@property (readonly,nonatomic) NSSet * devices; 
@property (readonly,nonatomic) NSString * anchor; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(NSString *)anchor;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)devices;
-(id)initWithDevices:(id)arg1 anchor:(id)arg2 ;
@end
