/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class CNGeminiBadge, UILabel;

@interface TSCellularPlanLabelTableViewCell : UITableViewCell {

	CNGeminiBadge* _badge;
	UILabel* _label;

}

@property (retain) CNGeminiBadge * badge;              //@synthesize badge=_badge - In the implementation block
@property (retain) UILabel * label;                    //@synthesize label=_label - In the implementation block
-(UILabel *)label;
-(void)setBadge:(CNGeminiBadge *)arg1 ;
-(CNGeminiBadge *)badge;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setLabel:(id)arg1 badge:(id)arg2 ;
-(void)setLabelWithNoBadge:(id)arg1 ;
@end

