/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIContextMenuActionView.h>

@class UIActivityIndicatorView;

@interface _UIContextMenuLoadingActionView : _UIContextMenuActionView {

	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateContentAppearance;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(id)_contentsTintColor;
-(id)_contentsCompositingFilter;
-(BOOL)_ignoreRemoveAllAnimations;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)trailingView;
@end
