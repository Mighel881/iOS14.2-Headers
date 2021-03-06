/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TSUtility/TSUtility-Structs.h>
@class NSMutableArray;

@interface TSUPerformanceTestHarness : NSObject {

	NSMutableArray* mTestCases;
	BOOL mQuiet;
	long long mPassingTests;
	long long mTotalTests;
	BOOL mPassed;
	timeval mSetupTime;

}

@property (assign,nonatomic) BOOL quiet; 
@property (nonatomic,readonly) long long passingTestCount; 
@property (nonatomic,readonly) long long testCount; 
@property (nonatomic,readonly) BOOL passed; 
+(id)harness;
-(void)setup;
-(id)init;
-(void)testSuite;
-(BOOL)quiet;
-(void)cleanup;
-(BOOL)passed;
-(void)report;
-(void)dealloc;
-(void)setQuiet:(BOOL)arg1 ;
-(id)testWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 ;
-(id)p_createResultDirectory;
-(void)p_writeSystemConfigurationToDirectory:(id)arg1 ;
-(void)p_writeCsvResultsToDirectory:(id)arg1 ;
-(void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 ;
-(void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 precision:(double)arg4 ;
-(BOOL)runTests;
-(long long)passingTestCount;
-(long long)testCount;
@end

