/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MetricKitServices.framework/MetricKitServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricKitServices/MXService.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface MXSpinTracerService : MXService {

	NSMutableArray* _spinTracerDataPaths;
	NSMutableArray* _unarchivedSpinTracerData;
	NSObject*<OS_os_log> _MXSpinTracerServiceLogHandle;
	NSObject*<OS_dispatch_queue> _requestQueue;

}

@property (retain) NSMutableArray * spinTracerDataPaths;                             //@synthesize spinTracerDataPaths=_spinTracerDataPaths - In the implementation block
@property (retain) NSMutableArray * unarchivedSpinTracerData;                        //@synthesize unarchivedSpinTracerData=_unarchivedSpinTracerData - In the implementation block
@property (retain) NSObject*<OS_os_log> MXSpinTracerServiceLogHandle;                //@synthesize MXSpinTracerServiceLogHandle=_MXSpinTracerServiceLogHandle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
+(id)sharedSpinTracerService;
-(id)init;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(BOOL)stopService;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)startService;
-(BOOL)diagnosticsSupported;
-(BOOL)diagnosticsAvailableForDate:(id)arg1 ;
-(id)getDiagnosticsForClient:(id)arg1 dateString:(id)arg2 ;
-(BOOL)_updateService;
-(void)unarchiveSpinTracerDataForDateString:(id)arg1 ;
-(NSMutableArray *)spinTracerDataPaths;
-(void)setSpinTracerDataPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)unarchivedSpinTracerData;
-(void)setUnarchivedSpinTracerData:(NSMutableArray *)arg1 ;
-(NSObject*<OS_os_log>)MXSpinTracerServiceLogHandle;
-(void)setMXSpinTracerServiceLogHandle:(NSObject*<OS_os_log>)arg1 ;
@end

