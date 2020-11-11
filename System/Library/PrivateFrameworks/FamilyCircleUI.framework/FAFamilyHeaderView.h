/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FamilyCircleUI/FamilyCircleUI-Structs.h>
#import <UIKitCore/UIView.h>

@class FAMugshotMarqueeView, UILabel;

@interface FAFamilyHeaderView : UIView {

	FAMugshotMarqueeView* _mugShots;
	UILabel* _familyHeaderLabel;

}

@property (nonatomic,readonly) UILabel * familyHeaderLabel;              //@synthesize familyHeaderLabel=_familyHeaderLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFamilyCircle:(id)arg1 profilePictureStore:(id)arg2 ;
-(UILabel *)familyHeaderLabel;
@end
