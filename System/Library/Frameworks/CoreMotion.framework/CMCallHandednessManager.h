/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, CMCallHandednessDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMCallHandednessManager : NSObject {

	NSObject*<OS_dispatch_queue> fPrivateQueue;
	Dispatcher* fDispatcher;
	id<CMCallHandednessDelegate> _delegate;

}

@property (assign,nonatomic) id<CMCallHandednessDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isCallHandednessAvailable;
-(id)init;
-(id<CMCallHandednessDelegate>)delegate;
-(void)setDelegate:(id<CMCallHandednessDelegate>)arg1 ;
-(void)onCallHandednessStateUpdated:(const Sample*)arg1 ;
-(void)startCallHandednessUpdates;
-(void)stopCallHandednessUpdates;
-(void)dealloc;
@end

