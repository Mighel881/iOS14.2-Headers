/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKPluggedInMonitor : _DKMonitor {

	BOOL _enabled;
	int _pluggedInToken;

}

@property (assign,nonatomic) BOOL enabled;                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int pluggedInToken;              //@synthesize pluggedInToken=_pluggedInToken - In the implementation block
+(id)entitlements;
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithState:(BOOL)arg1 adapterType:(long long)arg2 isWireless:(BOOL)arg3 ;
+(void)setIsPluggedIn:(BOOL)arg1 ;
-(void)synchronouslyReflectCurrentValue;
-(BOOL)enabled;
-(void)start;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setPluggedInToken:(int)arg1 ;
-(long long)currentAdapterType:(BOOL*)arg1 ;
-(int)pluggedInToken;
-(void)stop;
-(void)deactivate;
-(void)setCurrentState;
-(void)dealloc;
@end

