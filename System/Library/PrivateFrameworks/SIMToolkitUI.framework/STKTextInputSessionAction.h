/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SIMToolkitUI/STKSessionAction.h>

@class STKTextInputSessionData;

@interface STKTextInputSessionAction : STKSessionAction

@property (nonatomic,readonly) STKTextInputSessionData * sessionData; 
-(STKTextInputSessionData *)sessionData;
-(id)initWithBehavior:(id)arg1 inputData:(id)arg2 response:(/*^block*/id)arg3 ;
-(void)sendSuccessWithResponse:(id)arg1 ;
@end
