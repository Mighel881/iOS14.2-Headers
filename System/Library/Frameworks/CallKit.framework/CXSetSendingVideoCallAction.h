/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@interface CXSetSendingVideoCallAction : CXCallAction {

	BOOL _sendingVideo;

}

@property (assign,getter=isSendingVideo,nonatomic) BOOL sendingVideo;              //@synthesize sendingVideo=_sendingVideo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isSendingVideo;
-(id)initWithCoder:(id)arg1 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(void)setSendingVideo:(BOOL)arg1 ;
-(id)initWithCallUUID:(id)arg1 sendingVideo:(BOOL)arg2 ;
@end
