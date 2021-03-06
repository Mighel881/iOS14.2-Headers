/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAction.h>

@interface SBUIRemoteAlertButtonAction : BSAction

@property (nonatomic,readonly) unsigned long long events; 
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)events;
-(id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4 ;
-(id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2 ;
-(id)initWithEvents:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)sendResponseWithUnHandledEvents:(unsigned long long)arg1 ;
-(id)initWithEvents:(unsigned long long)arg1 ;
@end

