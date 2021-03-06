/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ENAccountPublicKey;
@class NSSet, NSArray;

@interface ENParticipant : NSObject <NSSecureCoding> {

	id<ENAccountPublicKey> _accountPublicKey;
	NSSet* _aliases;
	NSArray* _devices;

}

@property (nonatomic,retain) id<ENAccountPublicKey> accountPublicKey;              //@synthesize accountPublicKey=_accountPublicKey - In the implementation block
@property (nonatomic,retain) NSSet * aliases;                                      //@synthesize aliases=_aliases - In the implementation block
@property (nonatomic,retain) NSArray * devices;                                    //@synthesize devices=_devices - In the implementation block
@property (nonatomic,readonly) BOOL supportsEngram; 
+(id)participantsByAlias:(id)arg1 ;
+(id)participantsFromEndpoints:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSSet *)aliases;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAccountPublicKey:(id)arg1 aliases:(id)arg2 devices:(id)arg3 ;
-(id)description;
-(void)setDevices:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<ENAccountPublicKey>)accountPublicKey;
-(id)deviceWithIdentifier:(id)arg1 ;
-(NSArray *)devices;
-(void)setAliases:(NSSet *)arg1 ;
-(BOOL)supportsEngram;
-(void)setAccountPublicKey:(id<ENAccountPublicKey>)arg1 ;
@end

