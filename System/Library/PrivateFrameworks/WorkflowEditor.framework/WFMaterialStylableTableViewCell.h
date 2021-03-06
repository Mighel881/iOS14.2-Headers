/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UIColor, MTVisualStylingProvider, UIView;

@interface WFMaterialStylableTableViewCell : UITableViewCell {

	UIColor* _overridingBackgroundColor;
	MTVisualStylingProvider* _fillProvider;
	UIView* _highlightedBackgroundView;

}

@property (nonatomic,retain) UIView * highlightedBackgroundView;                  //@synthesize highlightedBackgroundView=_highlightedBackgroundView - In the implementation block
@property (nonatomic,retain) UIColor * overridingBackgroundColor;                 //@synthesize overridingBackgroundColor=_overridingBackgroundColor - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * fillProvider;              //@synthesize fillProvider=_fillProvider - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)highlightedBackgroundView;
-(void)setHighlightedBackgroundView:(UIView *)arg1 ;
-(void)setFillProvider:(MTVisualStylingProvider *)arg1 ;
-(UIColor *)overridingBackgroundColor;
-(void)setOverridingBackgroundColor:(UIColor *)arg1 ;
-(MTVisualStylingProvider *)fillProvider;
@end

