/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOMotionContextProvider.h>

@protocol GEOMotionContextProviderDelegate;
@class CMActivityManager, MNTraceRecorder, NSString;

@interface MNCoreMotionContextProvider : NSObject <GEOMotionContextProvider> {

	CMActivityManager* _activityManager;
	id<GEOMotionContextProviderDelegate> _delegate;
	MNTraceRecorder* _traceRecorder;

}

@property (assign,nonatomic,__weak) id<GEOMotionContextProviderDelegate> motionDelegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopMotionUpdates;
-(void)setMotionDelegate:(id<GEOMotionContextProviderDelegate>)arg1 ;
-(void)startMotionUpdates;
-(void)dealloc;
-(id)initWithTraceRecorder:(id)arg1 ;
-(id<GEOMotionContextProviderDelegate>)motionDelegate;
@end
