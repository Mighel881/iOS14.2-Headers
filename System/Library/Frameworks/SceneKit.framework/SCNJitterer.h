/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SCNJittererDelegate, OS_dispatch_source;
@class NSObject;

@interface SCNJitterer : NSObject {

	BOOL _enabled;
	unsigned long long _state;
	unsigned long long _iteration;
	BOOL _restartSourceIsSuspended;
	id<SCNJittererDelegate> _delegate;
	NSObject*<OS_dispatch_source> _restartSource;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
+(void)initialize;
-(id)loadDelegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)update;
-(void)jitter;
-(void)restart;
-(BOOL)isEnabled;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)stopIfNeeded;
-(void)delegateWillDie;
-(BOOL)isAborting;
@end

