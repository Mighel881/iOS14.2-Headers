/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIView;

@interface _TVActivityView : UIView {

	UIView* _activityView;
	UIView* _textView;

}

@property (nonatomic,retain) UIView * activityView;              //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) UIView * textView;                  //@synthesize textView=_textView - In the implementation block
-(UIView *)textView;
-(void)setTextView:(UIView *)arg1 ;
-(void)setActivityView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)activityView;
@end

