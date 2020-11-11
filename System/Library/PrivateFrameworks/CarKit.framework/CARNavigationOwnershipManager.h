/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRCarPlayNavigationOwnerClient.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol CARNavigationOwnershipManagerDelegate;
@class NSXPCConnection, NSString;

@interface CARNavigationOwnershipManager : NSObject <CRCarPlayNavigationOwnerClient, BSInvalidatable> {

	BOOL _ownershipRequested;
	NSXPCConnection* _connection;
	NSString* _identifier;
	id<CARNavigationOwnershipManagerDelegate> _delegate;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                           //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL ownershipRequested;                                                //@synthesize ownershipRequested=_ownershipRequested - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<CARNavigationOwnershipManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long owner; 
@property (nonatomic,readonly) NSString * lastNavigatingBundleIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupConnection;
-(NSString *)lastNavigatingBundleIdentifier;
-(void)setOwnershipRequested:(BOOL)arg1 ;
-(void)_handleConnectionReset;
-(BOOL)ownershipRequested;
-(void)requestNavigationOwnership;
-(void)releaseNavigationOwnership;
-(id<CARNavigationOwnershipManagerDelegate>)delegate;
-(unsigned long long)owner;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(void)setDelegate:(id<CARNavigationOwnershipManagerDelegate>)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSXPCConnection *)connection;
-(void)invalidate;
-(void)navigationOwnershipChangedTo:(unsigned long long)arg1 ;
@end
