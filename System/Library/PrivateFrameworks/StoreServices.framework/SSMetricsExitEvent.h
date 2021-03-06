/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsExitEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSString * exitType; 
@property (nonatomic,retain) NSString * exitURL; 
-(id)init;
-(NSString *)exitURL;
-(void)setExitURL:(NSString *)arg1 ;
-(void)setExitType:(NSString *)arg1 ;
-(void)setExitTypeWithSuspendReason:(long long)arg1 ;
-(NSString *)exitType;
-(id)description;
@end

