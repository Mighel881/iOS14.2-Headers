/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBAssertionOriginatorPidPersisting.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@class NSString;

@interface RBAssertionOriginatorPidStore : NSObject <RBAssertionOriginatorPidPersisting, RBStateCapturing> {

	SCD_Struct_RB4* _header;
	NSString* _path;
	int* _pids;
	int _headerID;
	int _pidsID;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(NSString *)stateCaptureTitle;
-(id)initWithPath:(id)arg1 ;
-(id)captureState;
-(void)addPid:(int)arg1 ;
-(NSString *)debugDescription;
-(void)removePid:(int)arg1 ;
-(void)setValidProcesses:(id)arg1 ;
-(BOOL)isValid;
-(BOOL)containsPid:(int)arg1 ;
-(void)dealloc;
@end

