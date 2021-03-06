/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDDiagnosticReportLogging.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class HMFActivity, NSDate, NSString;

@interface HMDLaunchEvent : HMDLogEvent <HMDDiagnosticReportLogging, HMDCoreAnalyticsLogging> {

	HMFActivity* _activity;
	NSDate* _XPCMessageTransportStartedDate;

}

@property (readonly) double diagnosticReportThreshold; 
@property (copy,readonly) NSString * diagnosticReportEventType; 
@property (copy,readonly) NSString * diagnosticReportEventSubType; 
@property (retain) HMFActivity * activity;                                      //@synthesize activity=_activity - In the implementation block
+(id)identifier;
-(id)eventName;
-(id)init;
-(void)setActivity:(HMFActivity *)arg1 ;
-(HMFActivity *)activity;
-(void)markXPCMessageTransportStarted;
-(id)serializedEvent;
-(void)updateDiagnosticReportSignature:(id)arg1 ;
-(NSString *)diagnosticReportEventType;
-(NSString *)diagnosticReportEventSubType;
-(double)diagnosticReportThreshold;
@end

