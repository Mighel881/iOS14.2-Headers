//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBLeafIcon.h>

#import <SpringBoardHome/SBHLibraryCategoryObserver-Protocol.h>

@class NSString, SBHLibraryCategory;

@interface SBHLibraryPodCategoryIcon : SBLeafIcon <SBHLibraryCategoryObserver>
{
    SBHLibraryCategory *_category;
}


// Remaining properties
@property(readonly, nonatomic) SBHLibraryCategory *category; // @synthesize category=_category;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

