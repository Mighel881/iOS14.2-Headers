/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKUIViewControllerClickableRootView.h>

@class MKViewWithHairline, NSLayoutConstraint, UIView, UIImageView, _MKUILabel, MKMapItemView, UIImage;

@interface _MKPlaceInlineMapContentView : _MKUIViewControllerClickableRootView {

	MKViewWithHairline* _hairlineView;
	NSLayoutConstraint* _topToTitleConstraint;
	NSLayoutConstraint* _titleToBottomConstraint;
	UIView* _mapView;
	UIImageView* _mapImageView;
	_MKUILabel* _titleLabel;
	MKMapItemView* _mapItemView;

}

@property (nonatomic,retain) UIImage * map; 
@property (nonatomic,retain) MKMapItemView * mapItemView;                                          //@synthesize mapItemView=_mapItemView - In the implementation block
@property (assign,getter=isBottomHairlineHidden,nonatomic) BOOL bottomHairlineHidden; 
-(double)titleHeight;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_contentSizeDidChange;
-(void)infoCardThemeChanged;
-(void)setBottomHairlineHidden:(BOOL)arg1 ;
-(void)setMap:(UIImage *)arg1 ;
-(UIImage *)map;
-(BOOL)hasTitle;
-(MKMapItemView *)mapItemView;
-(double)mapViewHeight;
-(BOOL)isBottomHairlineHidden;
-(BOOL)useImageView;
-(void)setMapItemView:(MKMapItemView *)arg1 ;
@end
