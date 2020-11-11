/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SSTestingCoordinatorDelegate;
@interface SSTestingCoordinator : NSObject {

	id<SSTestingCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSTestingCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SSTestingCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<SSTestingCoordinatorDelegate>)arg1 ;
-(void)_delayedHandleRunPPTRequest:(id)arg1 ;
-(void)handleRunPPTRequest:(id)arg1 ;
@end
