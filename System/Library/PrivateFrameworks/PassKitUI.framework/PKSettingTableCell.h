/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKTableViewCell.h>

@class UIActivityIndicatorView, UISwitch;

@interface PKSettingTableCell : PKTableViewCell {

	UIActivityIndicatorView* _spinner;
	BOOL _showingSpinner;
	id _target;
	SEL _action;
	UISwitch* _settingSwitch;

}

@property (assign,getter=isOn,nonatomic) BOOL on; 
@property (nonatomic,readonly) id target;                           //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                          //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) UISwitch * settingSwitch;              //@synthesize settingSwitch=_settingSwitch - In the implementation block
-(id)target;
-(BOOL)isOn;
-(void)setOn:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(UISwitch *)settingSwitch;
-(void)showSpinner:(BOOL)arg1 ;
-(void)setSettingSwitch:(UISwitch *)arg1 ;
-(void)prepareForReuse;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)dealloc;
-(SEL)action;
@end
