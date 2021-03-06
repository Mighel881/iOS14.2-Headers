/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface PKWatchHeroImageView : UIView {

	UIImageView* _watchView;
	CGSize _originalWatchViewSize;
	UILabel* _doneLabel;
	BOOL _hideDoneLabel;

}

@property (nonatomic,readonly) BOOL isCompactWatch; 
@property (assign,nonatomic) BOOL hideDoneLabel;                                //@synthesize hideDoneLabel=_hideDoneLabel - In the implementation block
@property (nonatomic,readonly) CGPoint watchScreenCenter; 
@property (nonatomic,readonly) CGRect watchScreenFrame; 
@property (nonatomic,readonly) CGRect cardFrame; 
@property (nonatomic,readonly) double watchDeviceImageScaleFactor; 
+(id)_bridgeHeroImage;
+(id)watchDeviceImage;
-(CGSize)imageSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(CGSize)_heroWatchImageSize;
-(id)_resizeImage:(id)arg1 toSize:(CGSize)arg2 ;
-(double)watchDeviceImageScaleFactor;
-(CGSize)_watchScreenSize:(double)arg1 ;
-(CGPoint)_watchScreenInset;
-(CGRect)cardFrame;
-(CGRect)spaceBelowCardFrame;
-(void)setHideDoneLabel:(BOOL)arg1 ;
-(BOOL)hideDoneLabel;
-(CGRect)watchScreenFrame;
-(CGPoint)watchScreenCenter;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isCompactWatch;
@end

