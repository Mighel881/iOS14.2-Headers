/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AAEventProcessorType
@optional
-(void)didEnterGroup:(id)arg1;
-(void)didLeaveGroup:(id)arg1;
-(void)didStartSession:(id)arg1;
-(void)didUpdateSession:(id)arg1;
-(void)didEndSession:(id)arg1 endDate:(id)arg2;

@required
-(void)processEvent:(id)arg1;

@end
