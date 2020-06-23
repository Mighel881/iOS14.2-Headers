//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/SBFLegibilitySettingsProvider-Protocol.h>
#import <SpringBoardUIServices/SBFLegibilitySettingsProviderDelegate-Protocol.h>
#import <SpringBoardUIServices/SBSUIWallpaperPreviewViewDelegate-Protocol.h>

@class AVURLAsset, NSDictionary, NSString, NSTimer, SBFWallpaperConfiguration, SBFWallpaperConfigurationManager, SBFWallpaperOptions, SBSUIProgressHUD, UIImage, _SBSUIOrientedImageView, _UILegibilitySettings;
@protocol SBFLegibilitySettingsProviderDelegate, SBSUIWallpaperPreviewViewControllerDelegate;

@interface SBSUIWallpaperPreviewViewController : UIViewController <SBFLegibilitySettingsProviderDelegate, SBSUIWallpaperPreviewViewDelegate, SBFLegibilitySettingsProvider>
{
    NSTimer *_dateTimer;
    SBFWallpaperConfigurationManager *_wallpaperConfigurationManager;
    SBFWallpaperConfiguration *_initialConfiguration;
    UIImage *_wallpaperImage;
    NSDictionary *_wallpaperImageDict;
    NSDictionary *_proceduralWallpaper;
    NSDictionary *_proceduralWallpaperOptions;
    _Bool _allowScrolling;
    long long _variant;
    NSString *_name;
    _Bool _colorSamplingEnabled;
    AVURLAsset *_video;
    NSDictionary *_videoDict;
    double _stillTimeInVideo;
    SBFWallpaperOptions *_options;
    NSDictionary *_optionsDict;
    _Bool _enableButtons;
    _Bool _disableContents;
    _Bool _disableParallax;
    SBSUIProgressHUD *_hud;
    _SBSUIOrientedImageView *_homeScreenPreviewView;
    _Bool _motionEnabled;
    _Bool _irisEnabled;
    id <SBFLegibilitySettingsProviderDelegate> _delegate;
    id <SBSUIWallpaperPreviewViewControllerDelegate> _previewDelegate;
    double _zoomScale;
    double _parallaxFactor;
    SBFWallpaperConfiguration *_wallpaperConfiguration;
    struct CGRect _cropRect;
}


// Remaining properties
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBFLegibilitySettingsProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool irisEnabled; // @synthesize irisEnabled=_irisEnabled;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(nonatomic) _Bool motionEnabled; // @synthesize motionEnabled=_motionEnabled;
@property(nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property(nonatomic) __weak id <SBSUIWallpaperPreviewViewControllerDelegate> previewDelegate; // @synthesize previewDelegate=_previewDelegate;
@property(readonly) Class superclass;
@property(copy, nonatomic) SBFWallpaperConfiguration *wallpaperConfiguration; // @synthesize wallpaperConfiguration=_wallpaperConfiguration;
@property(readonly) UIImage *wallpaperImage; // @synthesize wallpaperImage=_wallpaperImage;
@property(readonly, copy, nonatomic) SBFWallpaperOptions *wallpaperOptions;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@end

