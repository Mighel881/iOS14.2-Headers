//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SBIcon, SBIconView;

@protocol SBIconViewProviding
- (void)configureIconView:(SBIconView *)arg1 forIcon:(SBIcon *)arg2;
- (_Bool)isIconViewRecycled:(SBIconView *)arg1;
- (void)recycleIconView:(SBIconView *)arg1;
- (SBIconView *)dequeueReusableIconViewOfClass:(Class)arg1;
@end

