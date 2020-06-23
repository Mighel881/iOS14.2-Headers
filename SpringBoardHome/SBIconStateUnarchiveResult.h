//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBIconStateUnarchiveContext-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSString, SBRootFolder;

@interface SBIconStateUnarchiveResult : NSObject <SBIconStateUnarchiveContext, BSDescriptionProviding>
{
    SBRootFolder *_rootFolder;
    NSMutableArray *_folderStack;
    long long _parseDepth;
    NSMutableSet *_nodeIdentifiersUnarchived;
    _Bool _corrupted;
    _Bool _dirty;
    NSDictionary *_metadata;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isDirty) _Bool dirty;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic, setter=_setMetadata:) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic, setter=_setRootFolder:) SBRootFolder *rootFolder; // @synthesize rootFolder=_rootFolder;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@end

