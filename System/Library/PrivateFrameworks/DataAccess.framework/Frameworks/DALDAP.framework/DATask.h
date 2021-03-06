/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DATask <NSObject>
@optional
-(void)setTaskManager:(id)arg1;
-(BOOL)shouldForceNetworking;
-(void)requestCancelTaskWithReason:(int)arg1;
-(void)startModal;
-(BOOL)shouldHoldPowerAssertion;

@required
-(void)finishWithError:(id)arg1;
-(void)performTask;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;

@end

