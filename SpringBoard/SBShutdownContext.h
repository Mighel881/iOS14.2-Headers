//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/NSCopying-Protocol.h>

@class NSString;

@interface SBShutdownContext : NSObject <NSCopying>
{
    NSString *_reason;
    _Bool _fromUserPowerDown;
}


// Remaining properties
@property(nonatomic) _Bool fromUserPowerDown; // @synthesize fromUserPowerDown=_fromUserPowerDown;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@end
