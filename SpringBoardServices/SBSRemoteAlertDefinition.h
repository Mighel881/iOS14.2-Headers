//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSDescriptionProviding-Protocol.h>
#import <SpringBoardServices/BSXPCCoding-Protocol.h>
#import <SpringBoardServices/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface SBSRemoteAlertDefinition : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying>
{
    _Bool _forCarPlay;
    NSString *_serviceName;
    NSString *_viewControllerClassName;
    NSDictionary *_userInfo;
    NSString *_impersonatedCarPlayAppIdentifier;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForCarPlay) _Bool forCarPlay; // @synthesize forCarPlay=_forCarPlay;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *impersonatedCarPlayAppIdentifier; // @synthesize impersonatedCarPlayAppIdentifier=_impersonatedCarPlayAppIdentifier;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *viewControllerClassName; // @synthesize viewControllerClassName=_viewControllerClassName;
@end
