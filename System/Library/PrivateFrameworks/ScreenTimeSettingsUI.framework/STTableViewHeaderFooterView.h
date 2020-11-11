/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILayoutGuide, NSArray;

@interface STTableViewHeaderFooterView : UITableViewHeaderFooterView {

	UILayoutGuide* _contentLayoutGuide;
	NSArray* _rtlContentLayoutGuideConstraints;

}

@property (nonatomic,copy) NSArray * rtlContentLayoutGuideConstraints;              //@synthesize rtlContentLayoutGuideConstraints=_rtlContentLayoutGuideConstraints - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * contentLayoutGuide;                  //@synthesize contentLayoutGuide=_contentLayoutGuide - In the implementation block
-(UILayoutGuide *)contentLayoutGuide;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 useLayoutMarginsGuide:(BOOL)arg2 ;
-(NSArray *)rtlContentLayoutGuideConstraints;
-(void)setRtlContentLayoutGuideConstraints:(NSArray *)arg1 ;
@end
