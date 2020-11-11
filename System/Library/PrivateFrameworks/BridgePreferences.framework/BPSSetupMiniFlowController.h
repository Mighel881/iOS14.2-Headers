/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BPSBuddyController.h>

@protocol BPSBuddyControllerDelegate;
@class NSString;

@interface BPSSetupMiniFlowController : NSObject <BPSBuddyController> {

	BOOL _isDisplayingInSkippedMiniFlow;
	id<BPSBuddyControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BPSBuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isDisplayingInSkippedMiniFlow;                          //@synthesize isDisplayingInSkippedMiniFlow=_isDisplayingInSkippedMiniFlow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<BPSBuddyControllerDelegate>)delegate;
-(id)viewController;
-(void)setDelegate:(id<BPSBuddyControllerDelegate>)arg1 ;
-(id)navigationController;
-(BOOL)isDisplayingInSkippedMiniFlow;
-(void)setIsDisplayingInSkippedMiniFlow:(BOOL)arg1 ;
-(void)pushController:(id)arg1 animated:(BOOL)arg2 ;
@end
