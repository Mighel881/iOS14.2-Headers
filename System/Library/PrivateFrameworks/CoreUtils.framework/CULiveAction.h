/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUXPCCodable.h>
#import <libobjc.A.dylib/CUActivatable.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
@class AVAudioSession, RPCompanionLinkClient, RPCompanionLinkDevice, NSObject, NSArray, CUHomeKitManager, NSString, NSMutableSet, NSMutableDictionary, NSURL;

@interface CULiveAction : NSObject <CUXPCCodable, CUActivatable> {

	BOOL _activateCalled;
	/*^block*/id _activateCompletion;
	AVAudioSession* _audioSession;
	BOOL _clinkActivated;
	RPCompanionLinkClient* _clinkClient;
	RPCompanionLinkDevice* _clinkLocalDevice;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _destinationDevices;
	CUHomeKitManager* _homeKitManager;
	NSString* _homeKitSelfID;
	NSObject*<OS_dispatch_source> _homeKitTimer;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	BOOL _peersActivated;
	BOOL _peersSetupDone;
	BOOL _peersPerformDone;
	NSMutableSet* _peerSessionSet;
	BOOL _performLocally;
	BOOL _prefStereoSpeak;
	NSMutableDictionary* _request;
	int _sessionState;
	BOOL _sentTimingInfo;
	NSObject*<OS_os_transaction> _transaction;
	BOOL _xpcDone;
	BOOL _direct;
	int _alertType;
	/*^block*/id _invalidationHandler;
	NSArray* _destinationIDs;
	NSString* _originatingHomeKitAccessoryID;
	NSURL* _soundFileURL;
	NSString* _speakText;

}

@property (assign,nonatomic) int alertType;                                           //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,copy) NSArray * destinationIDs;                                  //@synthesize destinationIDs=_destinationIDs - In the implementation block
@property (assign,nonatomic) BOOL direct;                                             //@synthesize direct=_direct - In the implementation block
@property (nonatomic,copy) NSString * originatingHomeKitAccessoryID;                  //@synthesize originatingHomeKitAccessoryID=_originatingHomeKitAccessoryID - In the implementation block
@property (nonatomic,copy) NSURL * soundFileURL;                                      //@synthesize soundFileURL=_soundFileURL - In the implementation block
@property (nonatomic,copy) NSString * speakText;                                      //@synthesize speakText=_speakText - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)_run;
-(BOOL)direct;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setAlertType:(int)arg1 ;
-(int)alertType;
-(void)setDirect:(BOOL)arg1 ;
-(id)init;
-(id)invalidationHandler;
-(void)_reportError:(id)arg1 where:(const char*)arg2 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidate:(BOOL)arg1 ;
-(void)_runXPCStart;
-(void)_runHomeKitStart;
-(BOOL)_runPrepareRequest;
-(void)_runCLinkActivateStart;
-(void)_runCLinkActivateCompleted;
-(void)_runCLinkPeersActivateStart;
-(void)_runCLinkPeersSetupStart;
-(void)_runCLinkPeersPerformStart;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)_invalidated;
-(NSString *)speakText;
-(void)_runFinish;
-(id)_findStereoCounterpart:(id)arg1 ;
-(BOOL)_shouldPerformLocally;
-(NSArray *)destinationIDs;
-(void)setDestinationIDs:(NSArray *)arg1 ;
-(NSString *)originatingHomeKitAccessoryID;
-(void)setSpeakText:(NSString *)arg1 ;
-(void)setOriginatingHomeKitAccessoryID:(NSString *)arg1 ;
-(void)setSoundFileURL:(NSURL *)arg1 ;
-(void)invalidate;
-(NSURL *)soundFileURL;
@end
