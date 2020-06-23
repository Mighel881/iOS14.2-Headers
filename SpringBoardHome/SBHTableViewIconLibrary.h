//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, SBHIconModel, SBHLocalizedIndexedCollation;

@interface SBHTableViewIconLibrary : NSObject
{
    NSMutableDictionary *_iconForItemIdentifier;
    NSMutableDictionary *_titleForSectionIdentifier;
    SBHLocalizedIndexedCollation *_collation;
    SBHIconModel *_iconModel;
    NSMutableSet *_icons;
}


// Remaining properties
@property(readonly, nonatomic) SBHIconModel *iconModel; // @synthesize iconModel=_iconModel;
@property(copy, nonatomic) NSMutableSet *icons; // @synthesize icons=_icons;
@end

