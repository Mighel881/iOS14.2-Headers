//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSPredicate, NSString;

@interface SBHIconLibraryQuery : NSObject <NSCopying>
{
    NSPredicate *_predicate;
    NSString *_searchString;
}


// Remaining properties
@property(readonly, nonatomic) CDUnknownBlockType comparator;
@property(readonly, nonatomic) NSPredicate *predicate;
@property(readonly, copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@end

