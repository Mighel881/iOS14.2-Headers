/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TipsDaemon/TPSInclusivityValidation.h>

@class NSArray;

@interface TPSDeviceValidation : TPSInclusivityValidation

@property (nonatomic,readonly) NSArray * targetDevices; 
@property (nonatomic,readonly) NSArray * excludeDevices; 
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)targetDevices;
-(NSArray *)excludeDevices;
-(id)initWithTargetDevices:(id)arg1 excludeDevices:(id)arg2 ;
-(BOOL)_matchesDevices:(id)arg1 ;
@end

