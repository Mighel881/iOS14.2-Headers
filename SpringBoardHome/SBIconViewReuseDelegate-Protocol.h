//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBIconImageView, SBIconLabelImage, SBIconLabelImageParameters, SBIconView, UIView;
@protocol SBIconAccessoryView, SBIconLabelAccessoryView;

@protocol SBIconViewReuseDelegate <NSObject>

@optional
- (_Bool)iconView:(SBIconView *)arg1 shouldContinueToUseBackgroundViewForComponents:(UIView *)arg2;
- (UIView *)backgroundViewForComponentsOfIconView:(SBIconView *)arg1;
- (SBIconLabelImage *)iconView:(SBIconView *)arg1 labelImageWithParameters:(SBIconLabelImageParameters *)arg2;
- (void)iconView:(SBIconView *)arg1 willRemoveIconLabelAccessoryView:(UIView<SBIconLabelAccessoryView> *)arg2;
- (UIView<SBIconLabelAccessoryView> *)iconView:(SBIconView *)arg1 iconLabelAccessoryViewOfType:(long long)arg2;
- (void)iconView:(SBIconView *)arg1 willRemoveIconAccessoryView:(UIView<SBIconAccessoryView> *)arg2;
- (UIView<SBIconAccessoryView> *)iconView:(SBIconView *)arg1 iconAccessoryViewOfClass:(Class)arg2;
- (void)iconView:(SBIconView *)arg1 willRemoveIconImageView:(SBIconImageView *)arg2;
- (SBIconImageView *)imageViewForIconView:(SBIconView *)arg1;
@end

