/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CHSAvocadoDescriptorProviderObserver.h>

@protocol OS_dispatch_queue;
@class CHSAvocadoDescriptorProvider, NSMutableArray, INWatchdogTimer, NSObject, NSSet, NSString;

@interface INWidgetDescriptorManager : NSObject <CHSAvocadoDescriptorProviderObserver> {

	CHSAvocadoDescriptorProvider* _provider;
	BOOL _observing;
	NSMutableArray* _completionHandlers;
	INWatchdogTimer* _watchdogTimer;
	NSObject*<OS_dispatch_queue> _queue;
	NSSet* _widgetDescriptors;

}

@property (nonatomic,copy) NSSet * widgetDescriptors;               //@synthesize widgetDescriptors=_widgetDescriptors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)descriptorsDidChangeForAvocadoDescriptorProvider:(id)arg1 ;
-(void)getDescriptorsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_startObservingDescriptors;
-(void)getDescriptorForIntent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_notifyCompletionHandlersWithWidgetDescriptors:(id)arg1 ;
-(NSSet *)widgetDescriptors;
-(void)setWidgetDescriptors:(NSSet *)arg1 ;
-(void)dealloc;
@end

