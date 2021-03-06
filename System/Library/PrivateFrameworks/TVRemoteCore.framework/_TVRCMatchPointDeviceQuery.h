/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMHomeManagerDelegatePrivate.h>

@protocol _TVRCMatchPointDeviceQueryDelegate, NSObject;
@class HMHomeManager, NSMutableDictionary, NSString;

@interface _TVRCMatchPointDeviceQuery : NSObject <HMHomeManagerDelegatePrivate> {

	id<_TVRCMatchPointDeviceQueryDelegate> _delegate;
	HMHomeManager* _homeManager;
	id<NSObject> _homekitActiveAssertion;
	NSMutableDictionary* _wrapperToIdentifierMapping;

}

@property (nonatomic,retain) HMHomeManager * homeManager;                                         //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) id<NSObject> homekitActiveAssertion;                                 //@synthesize homekitActiveAssertion=_homekitActiveAssertion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * wrapperToIdentifierMapping;                    //@synthesize wrapperToIdentifierMapping=_wrapperToIdentifierMapping - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRCMatchPointDeviceQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(id)init;
-(id<_TVRCMatchPointDeviceQueryDelegate>)delegate;
-(HMHomeManager *)homeManager;
-(void)setDelegate:(id<_TVRCMatchPointDeviceQueryDelegate>)arg1 ;
-(void)homeManagerDidUpdateCurrentHome:(id)arg1 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)stop;
-(void)dealloc;
-(void)_matchPointServiceAdded:(id)arg1 ;
-(void)_matchPointServiceRemoved:(id)arg1 ;
-(void)_matchPointServiceNameChanged:(id)arg1 ;
-(void)_notifyAddedService:(id)arg1 ;
-(void)_notifyRemovedService:(id)arg1 ;
-(id<NSObject>)homekitActiveAssertion;
-(void)setHomekitActiveAssertion:(id<NSObject>)arg1 ;
-(NSMutableDictionary *)wrapperToIdentifierMapping;
-(void)setWrapperToIdentifierMapping:(NSMutableDictionary *)arg1 ;
@end

