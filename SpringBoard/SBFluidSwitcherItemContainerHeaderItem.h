//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/NSCopying-Protocol.h>

@class NSString, UIColor, UIImage;

@interface SBFluidSwitcherItemContainerHeaderItem : NSObject <NSCopying>
{
    NSString *_titleText;
    NSString *_subtitleText;
    UIImage *_image;
    UIColor *_titleTextColor;
    long long _subtitleInterfaceStyle;
}


// Remaining properties
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long subtitleInterfaceStyle; // @synthesize subtitleInterfaceStyle=_subtitleInterfaceStyle;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@end
