//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>

#import <SpringBoard/SBElasticAudioDataSource-Protocol.h>
#import <SpringBoard/SBElasticAudioVolumeViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBHUDViewControlling-Protocol.h>
#import <SpringBoard/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, SBElasticVolumeViewController;
@protocol SBVolumeHUDViewControllerDelegate;

@interface SBVolumeHUDViewController : SBFTouchPassThroughViewController <UIViewControllerTransitioningDelegate, SBElasticAudioDataSource, SBElasticAudioVolumeViewControllerDelegate, SBHUDViewControlling>
{
    id <SBVolumeHUDViewControllerDelegate> _delegate;
    SBElasticVolumeViewController *_elasticAudioViewController;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBVolumeHUDViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SBElasticVolumeViewController *elasticAudioViewController; // @synthesize elasticAudioViewController=_elasticAudioViewController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

