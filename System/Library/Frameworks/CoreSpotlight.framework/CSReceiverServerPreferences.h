/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpotlight/CoreSpotlightPreferences.h>

@class NSSet;

@interface CSReceiverServerPreferences : CoreSpotlightPreferences

@property (nonatomic,copy,readonly) NSSet * disabledServices; 
-(void)disableService:(id)arg1 ;
-(id)init;
-(NSSet *)disabledServices;
-(void)enableService:(id)arg1 ;
@end

