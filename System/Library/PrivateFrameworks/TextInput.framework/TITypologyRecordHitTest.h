/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardTouchEvent, TIKeyboardState, TIKeyboardLayout;

@interface TITypologyRecordHitTest : TITypologyRecord {

	TIKeyboardTouchEvent* _touchEvent;
	TIKeyboardState* _keyboardState;
	TIKeyboardLayout* _keyLayout;
	long long _keyCode;

}

@property (nonatomic,retain) TIKeyboardTouchEvent * touchEvent;              //@synthesize touchEvent=_touchEvent - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;                //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * keyLayout;                   //@synthesize keyLayout=_keyLayout - In the implementation block
@property (assign,nonatomic) long long keyCode;                              //@synthesize keyCode=_keyCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTouchEvent:(TIKeyboardTouchEvent *)arg1 ;
-(long long)keyCode;
-(void)replaceDocumentState:(id)arg1 ;
-(void)setKeyLayout:(TIKeyboardLayout *)arg1 ;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(void)applyToStatistic:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TIKeyboardTouchEvent *)touchEvent;
-(void)removeContextFromKeyboardState;
-(id)currentKeyboardState;
-(TIKeyboardState *)keyboardState;
-(void)setKeyCode:(long long)arg1 ;
-(TIKeyboardLayout *)keyLayout;
-(id)shortDescription;
@end
