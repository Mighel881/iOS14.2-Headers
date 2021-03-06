/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UILabel;

@interface CPSLabeledValueView : UIView {

	UILabel* _valueText;
	UILabel* _label;

}

@property (nonatomic,readonly) UILabel * valueText;              //@synthesize valueText=_valueText - In the implementation block
@property (nonatomic,readonly) UILabel * label;                  //@synthesize label=_label - In the implementation block
-(UILabel *)label;
-(id)init;
-(void)setTextColor:(id)arg1 ;
-(UILabel *)valueText;
@end

