/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardInput;

@interface TISKInputEvent : TISKEvent {

	double _downErrorDistance;
	double _upErrorDistance;
	BOOL _canComputeErrorDistance;
	BOOL _ignoreTapData;
	TIKeyboardInput* _input;

}

@property (nonatomic,retain) TIKeyboardInput * input;              //@synthesize input=_input - In the implementation block
@property (assign,nonatomic) BOOL ignoreTapData;                   //@synthesize ignoreTapData=_ignoreTapData - In the implementation block
+(id)makeInputEvent:(id)arg1 order:(long long)arg2 wordSeparator:(id)arg3 accentedLanguage:(BOOL)arg4 ;
-(void)setInput:(TIKeyboardInput *)arg1 ;
-(TIKeyboardInput *)input;
-(id)upTouchEvent;
-(void)reportToSession:(id)arg1 ;
-(void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2 ;
-(BOOL)isMissingATouch;
-(id)init:(id)arg1 type:(int)arg2 order:(long long)arg3 ;
-(double)downUpTimeDelta;
-(void)_computeErrorDistance;
-(double)touchDownErrorDistance;
-(double)touchUpErrorDistance;
-(BOOL)ignoreTapData;
-(void)setIgnoreTapData:(BOOL)arg1 ;
@end

