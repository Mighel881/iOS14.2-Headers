/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppSupportUI/NUIContainerBoxView.h>

@class TLKTextButton;

@interface SPUILockScreenFooterView : NUIContainerBoxView {

	TLKTextButton* _unlockScreenButton;

}

@property (retain) TLKTextButton * unlockScreenButton;              //@synthesize unlockScreenButton=_unlockScreenButton - In the implementation block
-(id)init;
-(void)updateTitle;
-(TLKTextButton *)unlockScreenButton;
-(void)setUnlockScreenButton:(TLKTextButton *)arg1 ;
-(void)unlockButtonPressed:(id)arg1 ;
@end
