/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSError;


@protocol CoreDAVSubmittable <NSObject>
@property (nonatomic,copy) id completionBlock; 
@property (assign,nonatomic) id<CoreDAVTaskManager> taskManager; 
@property (assign,nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic) double timeoutInterval; 
@required
-(id)completionBlock;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1;
-(NSError *)error;
-(void)setTaskManager:(id)arg1;
-(void)setCompletionBlock:(/*^block*/id)arg1;
-(void)setAccountInfoProvider:(id)arg1;
-(void)finishEarlyWithError:(id)arg1;
-(id<CoreDAVTaskManager>)taskManager;
-(id<CoreDAVAccountInfoProvider>)accountInfoProvider;
-(void)submitWithTaskManager:(id)arg1;

@end

