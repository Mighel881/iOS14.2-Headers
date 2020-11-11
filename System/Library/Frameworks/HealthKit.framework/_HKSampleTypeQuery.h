/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKSampleTypeQueryClientInterface.h>

@class NSString;

@interface _HKSampleTypeQuery : HKQuery <HKSampleTypeQueryClientInterface> {

	/*^block*/id _resultsHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(void)client_deliverSampleTypes:(id)arg1 query:(id)arg2 ;
-(id)initWithPredicate:(id)arg1 resultsHandler:(/*^block*/id)arg2 ;
@end
