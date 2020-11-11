/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKInlineAudioReplyButtonDelegate;
@class UIButton;

@interface CKInlineAudioReplyButtonController : NSObject {

	BOOL _started;
	id<CKInlineAudioReplyButtonDelegate> _delegate;
	UIButton* _startButton;
	UIButton* _stopButton;
	double _holdThreshold;
	double _touchDownTime;

}

@property (nonatomic,retain) UIButton * startButton;                                            //@synthesize startButton=_startButton - In the implementation block
@property (nonatomic,retain) UIButton * stopButton;                                             //@synthesize stopButton=_stopButton - In the implementation block
@property (assign,nonatomic) double holdThreshold;                                              //@synthesize holdThreshold=_holdThreshold - In the implementation block
@property (assign,nonatomic) double touchDownTime;                                              //@synthesize touchDownTime=_touchDownTime - In the implementation block
@property (assign,getter=isStarted,nonatomic) BOOL started;                                     //@synthesize started=_started - In the implementation block
@property (assign,nonatomic,__weak) id<CKInlineAudioReplyButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isStarted;
-(void)setStarted:(BOOL)arg1 ;
-(id<CKInlineAudioReplyButtonDelegate>)delegate;
-(UIButton *)startButton;
-(UIButton *)stopButton;
-(id)initWithStartButton:(id)arg1 stopButton:(id)arg2 ;
-(void)setStopButton:(UIButton *)arg1 ;
-(void)setDelegate:(id<CKInlineAudioReplyButtonDelegate>)arg1 ;
-(void)setHoldThreshold:(double)arg1 ;
-(void)touchDownInStartButton:(id)arg1 event:(id)arg2 ;
-(void)touchUpInStartButton:(id)arg1 event:(id)arg2 ;
-(void)touchUpOutsideStartButton:(id)arg1 event:(id)arg2 ;
-(void)touchUpInStopButton:(id)arg1 ;
-(void)touchDragEnter:(id)arg1 ;
-(void)touchDragExit:(id)arg1 ;
-(void)setStartButton:(UIButton *)arg1 ;
-(void)setTouchDownTime:(double)arg1 ;
-(double)touchDownTime;
-(double)holdThreshold;
-(void)dealloc;
@end
