/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HUIconView, NSArray;

@interface HUTriggerIconView : UIView {

	HUIconView* _iconView;
	NSArray* _constraints;

}

@property (nonatomic,retain) HUIconView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
-(HUIconView *)iconView;
-(NSArray *)constraints;
-(CGSize)intrinsicContentSize;
-(id)initWithIconDescriptor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setIconView:(HUIconView *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
@end

