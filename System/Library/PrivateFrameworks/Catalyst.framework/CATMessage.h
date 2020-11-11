/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface CATMessage : NSObject <NSSecureCoding> {

	NSUUID* _messageUUID;

}

@property (nonatomic,retain) id cat_assertion; 
@property (nonatomic,retain) NSUUID * messageUUID;              //@synthesize messageUUID=_messageUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setMessageUUID:(NSUUID *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)messageUUID;
-(id)cat_assertion;
-(void)setCat_assertion:(id)arg1 ;
@end
