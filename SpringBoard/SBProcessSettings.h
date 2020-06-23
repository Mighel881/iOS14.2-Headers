//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/BSSettingDescriptionProvider-Protocol.h>
#import <SpringBoard/NSCopying-Protocol.h>
#import <SpringBoard/SBProcessSettings-Protocol.h>

@class BSMutableSettings, NSString;

@interface SBProcessSettings : NSObject <BSSettingDescriptionProvider, SBProcessSettings, NSCopying, BSDescriptionProviding>
{
    BSMutableSettings *_settings;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

