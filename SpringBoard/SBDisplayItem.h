//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/NSCopying-Protocol.h>

@class NSString;

@interface SBDisplayItem : NSObject <NSCopying, BSDescriptionProviding>
{
    NSString *_uniqueStringRepresentation;
    CDUnknownBlockType _sceneIdentifierFromBundleIdentifierGenerator;
    long long _type;
    NSString *_bundleIdentifier;
    NSString *_uniqueIdentifier;
}


// Remaining properties
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *webClipIdentifier;
@end

