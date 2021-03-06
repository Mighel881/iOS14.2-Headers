/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTTimerObserver <NSObject>
@required
-(void)source:(id)arg1 didDismissTimer:(id)arg2;
-(void)source:(id)arg1 didAddTimers:(id)arg2;
-(void)source:(id)arg1 didUpdateTimers:(id)arg2;
-(void)nextTimerDidChange:(id)arg1;
-(void)source:(id)arg1 didRemoveTimers:(id)arg2;
-(void)source:(id)arg1 didFireTimer:(id)arg2;

@end

