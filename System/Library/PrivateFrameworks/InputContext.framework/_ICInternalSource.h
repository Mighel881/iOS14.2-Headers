/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_ICPredictionSourcing.h>

@class NSString;

@interface _ICInternalSource : NSObject <_ICPredictionSourcing> {

	NSString* _name;

}
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(void)warmUp;
-(void)hibernate;
-(id)init;
-(void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)localizedStringForKey:(id)arg1 withLocale:(id)arg2 ;
-(id)name;
-(void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)doesSupportTriggerSourceType:(unsigned char)arg1 ;
-(void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
@end
