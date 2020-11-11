/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlaySupport/CPSButton.h>

@class UIFont;

@interface CPSStyledTextButton : CPSButton {

	UIFont* _fontOverride;

}

@property (nonatomic,retain) UIFont * fontOverride;              //@synthesize fontOverride=_fontOverride - In the implementation block
+(id)buttonWithTextButton:(id)arg1 ;
-(id)_externalUnfocusedBorderColor;
-(id)_buttonFont;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIFont *)fontOverride;
-(void)setFontOverride:(UIFont *)arg1 ;
@end
