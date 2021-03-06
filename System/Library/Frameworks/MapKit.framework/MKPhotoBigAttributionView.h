/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKPhotoBigAttributionViewSubclass.h>
#import <libobjc.A.dylib/MKActivityObserving.h>

@class UIImageView, UIView, UIActivityIndicatorView, MKMapItem, NSString;

@interface MKPhotoBigAttributionView : UIView <MKPhotoBigAttributionViewSubclass, MKActivityObserving> {

	UIImageView* _imageView;
	UIView* _backgroundView;
	BOOL _needsImageLoad;
	UIActivityIndicatorView* _spinner;
	long long _context;
	long long _type;
	MKMapItem* _mapItem;
	UIView* _contentView;

}

@property (nonatomic,readonly) UIView * contentView;                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,readonly) long long context;                              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                              //@synthesize mapItem=_mapItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bigAttributionViewForMapItem:(id)arg1 attributionType:(long long)arg2 isFirstParty:(BOOL)arg3 context:(long long)arg4 ;
-(UIActivityIndicatorView *)spinner;
-(void)setType:(long long)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(long long)context;
-(void)beginAnimatingActivityIndicator;
-(void)endAnimatingActivityIndicatorWithError:(id)arg1 ;
-(void)layoutSubviews;
-(MKMapItem *)mapItem;
-(long long)type;
-(void)didUpdateMapItem;
-(void)didUpdateAttributionViewType;
-(void)willStartAnimatingActivityIndicatorView;
-(void)didEndAnimatingActivityIndicatorView;
-(void)updateBackgroundIfNeeded;
-(UIView *)contentView;
-(id)initWithContext:(long long)arg1 ;
@end

