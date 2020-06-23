//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBFolder, SBHLibraryCategory;

@protocol SBHLibraryCategoryObserver <NSObject>

@optional
- (void)category:(SBHLibraryCategory *)arg1 didUpdateIconsWithinFolder:(SBFolder *)arg2;
- (void)category:(SBHLibraryCategory *)arg1 willUpdateIconsWithinFolder:(SBFolder *)arg2;
- (void)categoryDidUpdate:(SBHLibraryCategory *)arg1;
- (void)categoryWillUpdate:(SBHLibraryCategory *)arg1;
@end

