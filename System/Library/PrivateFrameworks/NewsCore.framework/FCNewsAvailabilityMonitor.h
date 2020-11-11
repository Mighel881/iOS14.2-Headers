/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableArray, LSApplicationProxy, NSObject;

@interface FCNewsAvailabilityMonitor : NSObject {

	BOOL _NewsIsAvailable;
	NSMutableArray* _blocks;
	LSApplicationProxy* _applicationProxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * blocks;                                    //@synthesize blocks=_blocks - In the implementation block
@property (nonatomic,retain) LSApplicationProxy * applicationProxy;                      //@synthesize applicationProxy=_applicationProxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (getter=isNewsAvailable,nonatomic,readonly) BOOL NewsIsAvailable;              //@synthesize NewsIsAvailable=_NewsIsAvailable - In the implementation block
-(void)addNotificationBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)blocks;
-(void)_updateAvailability;
-(id)init;
-(id)initWithProcessVariant:(unsigned long long)arg1 queue:(id)arg2 ;
-(void)setApplicationProxy:(LSApplicationProxy *)arg1 ;
-(LSApplicationProxy *)applicationProxy;
-(BOOL)_isNewsAvailable;
-(id)initWithProcessVariant:(unsigned long long)arg1 ;
-(BOOL)isNewsAvailable;
-(id)initWithApplicationProxy:(id)arg1 queue:(id)arg2 ;
-(void)setBlocks:(NSMutableArray *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(void)setNewsIsAvailable:(BOOL)arg1 ;
@end
