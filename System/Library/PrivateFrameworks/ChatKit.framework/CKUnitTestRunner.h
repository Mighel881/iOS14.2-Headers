/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IMUnitTestRunnerDelegate.h>

@class IMUnitTestRunner, NSFileHandle, NSString;

@interface CKUnitTestRunner : NSObject <IMUnitTestRunnerDelegate> {

	BOOL _shouldWrite;
	IMUnitTestRunner* _runner;
	NSFileHandle* _fileHandle;

}

@property (nonatomic,retain) IMUnitTestRunner * runner;              //@synthesize runner=_runner - In the implementation block
@property (assign,nonatomic) BOOL shouldWrite;                       //@synthesize shouldWrite=_shouldWrite - In the implementation block
@property (nonatomic,retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSFileHandle *)fileHandle;
-(IMUnitTestRunner *)runner;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(void)setRunner:(IMUnitTestRunner *)arg1 ;
-(BOOL)shouldWrite;
-(void)setShouldWrite:(BOOL)arg1 ;
-(void)_dumpResults:(id)arg1 ;
-(void)unitTestRunner:(id)arg1 didReceiveOutput:(id)arg2 ;
-(void)runUnitTestBundleAtPath:(id)arg1 writeToFile:(BOOL)arg2 ;
@end

