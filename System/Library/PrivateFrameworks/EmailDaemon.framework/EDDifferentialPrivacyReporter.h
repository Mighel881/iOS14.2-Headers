/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EDMessageChangeHookResponder.h>

@protocol EMUserProfileProvider, OS_dispatch_queue;
@class NSString, _MSTTLReference, EDMailDynamicDataAsset, NSObject;

@interface EDDifferentialPrivacyReporter : NSObject <EDMessageChangeHookResponder> {

	NSString* _recordingKey;
	_MSTTLReference* _userDomains;
	id<EMUserProfileProvider> _profileProvider;
	EDMailDynamicDataAsset* _mailDynamicData;
	/*^block*/id _recordingHandler;
	NSObject*<OS_dispatch_queue> _recordingQueue;

}

@property (nonatomic,copy) id recordingHandler;                                              //@synthesize recordingHandler=_recordingHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> recordingQueue;                    //@synthesize recordingQueue=_recordingQueue - In the implementation block
@property (nonatomic,retain) NSString * _recordingKey;                                       //@synthesize recordingKey=_recordingKey - In the implementation block
@property (assign,nonatomic,__weak) id<EMUserProfileProvider> _profileProvider;              //@synthesize profileProvider=_profileProvider - In the implementation block
@property (nonatomic,retain) _MSTTLReference * _userDomains;                                 //@synthesize userDomains=_userDomains - In the implementation block
@property (nonatomic,retain) EDMailDynamicDataAsset * _mailDynamicData;                      //@synthesize mailDynamicData=_mailDynamicData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_localeIdentifier;
-(BOOL)_isUserAccountDomain:(id)arg1 ;
-(void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2 ;
-(id)initWithUserProfileProvider:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)recordingQueue;
-(_MSTTLReference *)_userDomains;
-(void)setRecordingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRecordingHandler:(id)arg1 ;
-(void)set_recordingKey:(NSString *)arg1 ;
-(id<EMUserProfileProvider>)_profileProvider;
-(BOOL)_shouldRecordMailbox:(id)arg1 ;
-(void)reportSenderDomainForMessages:(id)arg1 ;
-(NSString *)_recordingKey;
-(void)_recordSenders:(id)arg1 ;
-(id)recordingHandler;
-(void)set_profileProvider:(id<EMUserProfileProvider>)arg1 ;
-(void)set_userDomains:(_MSTTLReference *)arg1 ;
-(EDMailDynamicDataAsset *)_mailDynamicData;
-(void)set_mailDynamicData:(EDMailDynamicDataAsset *)arg1 ;
@end

