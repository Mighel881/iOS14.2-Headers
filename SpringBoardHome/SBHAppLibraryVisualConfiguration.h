//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSString;

@interface SBHAppLibraryVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    double _searchContinuousCornerRadius;
    struct UIEdgeInsets _appSearchTextFieldLayoutInsets;
}


// Remaining properties
@property(nonatomic) struct UIEdgeInsets appSearchTextFieldLayoutInsets; // @synthesize appSearchTextFieldLayoutInsets=_appSearchTextFieldLayoutInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double searchContinuousCornerRadius; // @synthesize searchContinuousCornerRadius=_searchContinuousCornerRadius;
@property(readonly) Class superclass;
@end

