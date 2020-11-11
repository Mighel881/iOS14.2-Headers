/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:49:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SetupKit.framework/SetupKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SetupKit/SetupKit-Structs.h>
#import <libobjc.A.dylib/CUActivatable.h>
#import <libobjc.A.dylib/CULabelable.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableArray, NSObject;

@interface SKFlow : NSObject <CUActivatable, CULabelable> {

	BOOL _activateCalled;
	NSMutableArray* _activatedSteps;
	unsigned long long _currentStepIndex;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	int _runState;
	LogCategory* _ucat;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	/*^block*/id _buildStepsHandler;

}

@property (nonatomic,copy) id buildStepsHandler;                                      //@synthesize buildStepsHandler=_buildStepsHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)label;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(id)invalidationHandler;
-(id)description;
-(void)setLabel:(NSString *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)invalidate;
-(void)dealloc;
-(void)activateStep:(id)arg1 ;
-(void)_runSteps;
-(id)buildStepsHandler;
-(void)setBuildStepsHandler:(id)arg1 ;
@end
