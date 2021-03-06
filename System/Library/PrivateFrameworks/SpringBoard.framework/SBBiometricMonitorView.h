/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface SBBiometricMonitorView : UIView {

	UIView* _stateView;
	UIView* _presenceView;
	UIView* _poseView;
	long long _matchState;
	long long _presenceDetectState;
	long long _poseState;

}

@property (assign,nonatomic) long long matchState;                       //@synthesize matchState=_matchState - In the implementation block
@property (assign,nonatomic) long long presenceDetectState;              //@synthesize presenceDetectState=_presenceDetectState - In the implementation block
@property (assign,nonatomic) long long poseState;                        //@synthesize poseState=_poseState - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setMatchState:(long long)arg1 ;
-(void)setPresenceDetectState:(long long)arg1 ;
-(void)setPoseState:(long long)arg1 ;
-(long long)matchState;
-(long long)presenceDetectState;
-(long long)poseState;
@end

