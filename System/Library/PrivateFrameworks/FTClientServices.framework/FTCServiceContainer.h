/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FTCServiceMonitor, NSMutableSet;

@interface FTCServiceContainer : NSObject {

	FTCServiceMonitor* _monitor;
	NSMutableSet* _listeners;

}

@property (nonatomic,retain) FTCServiceMonitor * monitor;                    //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain,readonly) NSMutableSet * listeners;              //@synthesize listeners=_listeners - In the implementation block
-(BOOL)addListenerID:(id)arg1 ;
-(BOOL)removeListenerID:(id)arg1 ;
-(id)initWithServiceType:(long long)arg1 ;
-(BOOL)hasListenerID:(id)arg1 ;
-(NSMutableSet *)listeners;
-(void)setMonitor:(FTCServiceMonitor *)arg1 ;
-(FTCServiceMonitor *)monitor;
-(void)dealloc;
@end

