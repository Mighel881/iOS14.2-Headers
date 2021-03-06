/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/iAd.framework/iAd
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iAd/iAd-Structs.h>
#import <MediaPlayer/MPVolumeSlider.h>

@class UIColor;

@interface ADVolumeSlider : MPVolumeSlider {

	UIColor* _maximumTintUsedForTrackImageColor;
	UIColor* _minimumTintUsedForTrackImageColor;

}
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)_updateTrackTintForVolumeControlAvailability;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(void)_availableRoutesDidChangeNotification:(id)arg1 ;
-(id)_trackImageWithTintColor:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_newVolumeWarningView;
@end

