/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSMutableArray, NSArray;

@interface TPNumberPad : UIControl {

	NSMutableArray* _buttons;
	BOOL _numberButtonsEnabled;
	double _buttonBackgroundAlpha;

}

@property (assign,nonatomic) BOOL numberButtonsEnabled;                 //@synthesize numberButtonsEnabled=_numberButtonsEnabled - In the implementation block
@property (retain) NSArray * buttons; 
@property (assign,nonatomic) double buttonBackgroundAlpha;              //@synthesize buttonBackgroundAlpha=_buttonBackgroundAlpha - In the implementation block
-(void)buttonTapped:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSArray *)buttons;
-(void)buttonDown:(id)arg1 ;
-(void)buttonCancelled:(id)arg1 ;
-(void)buttonUp:(id)arg1 ;
-(id)initWithButtons:(id)arg1 ;
-(void)buttonLongPressed:(id)arg1 ;
-(void)buttonUpOutside:(id)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(void)dealloc;
-(void)replaceButton:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setNumberButtonsEnabled:(BOOL)arg1 ;
-(BOOL)numberButtonsEnabled;
-(void)_addButton:(id)arg1 ;
-(void)_layoutGrid;
-(void)handleCurrentLocaleDidChangeNotification:(id)arg1 ;
-(void)buttonLongPressedViaGesture:(id)arg1 ;
-(double)buttonBackgroundAlpha;
-(void)setButtonBackgroundAlpha:(double)arg1 ;
@end
