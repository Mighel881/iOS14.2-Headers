/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface SiriUICardLoadingMonitor : NSObject {

	NSMutableArray* _observers;

}
+(id)sharedInstance;
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(BOOL)isTrackingObserver:(id)arg1 ;
-(void)broadcastCardSnippet:(id)arg1 ;
@end
