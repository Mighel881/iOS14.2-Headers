/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SFPeopleSuggesterResult : NSObject <NSSecureCoding> {

	unsigned _flags;
	NSString* _contactID;
	NSArray* _handles;
	NSString* _sendersKnownAlias;

}

@property (nonatomic,copy) NSString * contactID;                      //@synthesize contactID=_contactID - In the implementation block
@property (assign,nonatomic) unsigned flags;                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSArray * handles;                         //@synthesize handles=_handles - In the implementation block
@property (nonatomic,copy) NSString * sendersKnownAlias;              //@synthesize sendersKnownAlias=_sendersKnownAlias - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHandles:(NSArray *)arg1 ;
-(NSArray *)handles;
-(NSString *)contactID;
-(void)setContactID:(NSString *)arg1 ;
-(unsigned)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSendersKnownAlias:(NSString *)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sendersKnownAlias;
@end
