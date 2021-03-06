/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/DNDStateUpdateListener.h>

@class DNDStateService, NSString;

@interface _DKDoNotDisturbMonitor : _DKMonitor <DNDStateUpdateListener> {

	DNDStateService* _dndStateService;

}

@property (nonatomic,retain) DNDStateService * dndStateService;              //@synthesize dndStateService=_dndStateService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventStream;
+(id)_eventWithState:(BOOL)arg1 ;
-(void)setDndStateService:(DNDStateService *)arg1 ;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)start;
-(void)stop;
-(DNDStateService *)dndStateService;
@end

