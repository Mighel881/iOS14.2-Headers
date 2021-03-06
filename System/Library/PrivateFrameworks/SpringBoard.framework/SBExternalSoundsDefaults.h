/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface SBExternalSoundsDefaults : BSAbstractDefaultDomain

@property (assign,nonatomic) BOOL keyboardPlaysSounds; 
@property (assign,nonatomic) BOOL systemHapticsEnabled; 
@property (assign,nonatomic) BOOL buttonsCanChangeRingerVolume; 
-(void)setButtonsCanChangeRingerVolume:(BOOL)arg1 ;
-(BOOL)buttonsCanChangeRingerVolume;
-(void)setSystemHapticsEnabled:(BOOL)arg1 ;
-(BOOL)systemHapticsEnabled;
-(void)setKeyboardPlaysSounds:(BOOL)arg1 ;
-(BOOL)keyboardPlaysSounds;
-(id)init;
-(void)_bindAndRegisterDefaults;
@end

