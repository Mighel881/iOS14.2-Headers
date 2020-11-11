/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKQuantitySeriesSampleEditorTaskServerInterface.h>

@class HKQuantitySample;

@interface HDQuantitySeriesEditorTaskServer : HDStandardTaskServer <HKQuantitySeriesSampleEditorTaskServerInterface> {

	HKQuantitySample* _quantitySample;

}
+(id)requiredEntitlements;
+(id)taskIdentifier;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
+(Class)configurationClass;
-(id)remoteInterface;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(id)exportedInterface;
-(void)remote_commitRemovedDatums:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
