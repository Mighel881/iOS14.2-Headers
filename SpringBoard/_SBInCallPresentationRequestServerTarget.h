//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSInCallPresentationClientToServerInterface-Protocol.h>

@class BSServiceConnection, NSString, NSUUID;
@protocol SBSInCallPresentationClientToServerInterface;

@interface _SBInCallPresentationRequestServerTarget : NSObject <SBSInCallPresentationClientToServerInterface>
{
    BSServiceConnection *_connection;
    id <SBSInCallPresentationClientToServerInterface> _proxyInterface;
    NSUUID *_clientIdentifier;
}


// Remaining properties
@property(readonly, copy, nonatomic) NSUUID *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) __weak BSServiceConnection *connection; // @synthesize connection=_connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <SBSInCallPresentationClientToServerInterface> proxyInterface; // @synthesize proxyInterface=_proxyInterface;
@property(readonly) Class superclass;
@end

