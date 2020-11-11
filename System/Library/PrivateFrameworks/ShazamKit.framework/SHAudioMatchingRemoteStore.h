/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShazamKit/SHRemoteStore.h>

@class SHProxyMatcher;

@interface SHAudioMatchingRemoteStore : SHRemoteStore {

	BOOL _sendNotifications;
	SHProxyMatcher* _proxyMatcher;

}

@property (nonatomic,retain) SHProxyMatcher * proxyMatcher;              //@synthesize proxyMatcher=_proxyMatcher - In the implementation block
@property (assign,nonatomic) BOOL sendNotifications;                     //@synthesize sendNotifications=_sendNotifications - In the implementation block
-(void)stop;
-(id)createMatcher;
-(BOOL)sendNotifications;
-(SHProxyMatcher *)proxyMatcher;
-(void)startOneMatchAttempt;
-(void)startMatching;
-(void)startMatchingUntilDeadline:(id)arg1 ;
-(void)startMatchingUntilResultFound;
-(void)setSendNotifications:(BOOL)arg1 ;
-(void)setProxyMatcher:(SHProxyMatcher *)arg1 ;
@end
