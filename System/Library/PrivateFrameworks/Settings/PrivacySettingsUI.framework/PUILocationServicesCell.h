/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSSwitchTableCell.h>

@class PUILocationUsageMixin;

@interface PUILocationServicesCell : PSSwitchTableCell {

	PUILocationUsageMixin* _location;

}

@property (nonatomic,readonly) PUILocationUsageMixin * location;              //@synthesize location=_location - In the implementation block
-(PUILocationUsageMixin *)location;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

