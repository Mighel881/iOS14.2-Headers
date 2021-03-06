/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView;

@interface NTKCDetailTableViewCell : UITableViewCell {

	BOOL _showsSeparator;
	BOOL _ignoresRTLCorrection;
	UIView* _separatorView;

}

@property (nonatomic,retain) UIView * separatorView;                 //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic) BOOL ignoresRTLCorrection;              //@synthesize ignoresRTLCorrection=_ignoresRTLCorrection - In the implementation block
@property (assign,nonatomic) BOOL showsSeparator;                    //@synthesize showsSeparator=_showsSeparator - In the implementation block
+(id)defaultTextColor;
+(id)titleFont;
+(id)reuseIdentifier;
-(UIView *)separatorView;
-(id)init;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)showsSeparator;
-(id)initWithStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setSeparatorView:(UIView *)arg1 ;
-(double)rowHeight;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setShowsSeparator:(BOOL)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_fontSizeDidChange;
-(BOOL)_visibleAtPoint:(CGPoint)arg1 ;
-(id)_fontForTextLabel;
-(id)_fontForDetailTextLabel;
-(BOOL)ignoresRTLCorrection;
-(void)setIgnoresRTLCorrection:(BOOL)arg1 ;
@end

