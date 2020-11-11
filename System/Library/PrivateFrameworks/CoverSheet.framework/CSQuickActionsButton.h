/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICoverSheetButton.h>

@class _UILegibilitySettings;

@interface CSQuickActionsButton : UICoverSheetButton {

	BOOL _permitted;
	long long _type;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic) long long type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL permitted;                                          //@synthesize permitted=_permitted - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(_UILegibilitySettings *)legibilitySettings;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateStyle;
-(void)setType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(long long)type;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(id)_buttonImageNameForSelected:(BOOL)arg1 ;
-(id)_imageWithName:(id)arg1 ;
-(id)_accessoryTitleForType;
-(id)_statisticsIdentifierForType;
-(void)setPermitted:(BOOL)arg1 ;
-(BOOL)permitted;
@end
