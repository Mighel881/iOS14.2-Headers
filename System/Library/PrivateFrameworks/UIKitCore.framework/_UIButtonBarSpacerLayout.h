/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIButtonBarLayout.h>

@class UIBarButtonItem, UIView, NSLayoutConstraint;

@interface _UIButtonBarSpacerLayout : _UIButtonBarLayout {

	UIBarButtonItem* _item;
	UIView* _spacer;
	NSLayoutConstraint* _requestedSize;
	NSLayoutConstraint* _minimumSize;
	NSLayoutConstraint* _equalSize;
	BOOL _flexible;
	long long _spacerType;

}

@property (nonatomic,readonly) long long spacerType;              //@synthesize spacerType=_spacerType - In the implementation block
+(long long)typeOfSpacerBetweenLayout:(id)arg1 andLayout:(id)arg2 ;
+(id)spacerForLayoutMetrics:(id)arg1 betweenLayout:(id)arg2 andLayout:(id)arg3 ;
-(void)_addLayoutViews:(id)arg1 ;
-(id)barButtonItem;
-(double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1 ;
-(id)initWithLayoutMetrics:(id)arg1 ;
-(id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2 ;
-(BOOL)suppressSpacing;
-(BOOL)isSpaceLayout;
-(void)_configure;
-(long long)spacerType;
-(id)description;
-(void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
@end

