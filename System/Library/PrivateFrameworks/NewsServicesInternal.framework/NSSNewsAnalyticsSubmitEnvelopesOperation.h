/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCOperation.h>

@protocol FCNewsAppConfigurationManagerFCCoreConfigurationManager;
@class NSArray;

@interface NSSNewsAnalyticsSubmitEnvelopesOperation : FCOperation {

	NSArray* _envelopes;
	/*^block*/id _handoffCompletion;
	/*^block*/id _submissionCompletion;
	id<FCNewsAppConfigurationManager><FCCoreConfigurationManager> _appConfigurationManager;

}

@property (nonatomic,copy) NSArray * envelopes;                                                                                  //@synthesize envelopes=_envelopes - In the implementation block
@property (nonatomic,copy) id handoffCompletion;                                                                                 //@synthesize handoffCompletion=_handoffCompletion - In the implementation block
@property (nonatomic,copy) id submissionCompletion;                                                                              //@synthesize submissionCompletion=_submissionCompletion - In the implementation block
@property (nonatomic,retain) id<FCNewsAppConfigurationManager><FCCoreConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(id)init;
-(void)setHandoffCompletion:(id)arg1 ;
-(id<FCNewsAppConfigurationManager><FCCoreConfigurationManager>)appConfigurationManager;
-(NSArray *)envelopes;
-(void)operationDidFinishWithError:(id)arg1 ;
-(void)setAppConfigurationManager:(id<FCNewsAppConfigurationManager><FCCoreConfigurationManager>)arg1 ;
-(void)setSubmissionCompletion:(id)arg1 ;
-(void)setEnvelopes:(NSArray *)arg1 ;
-(id)handoffCompletion;
-(id)submissionCompletion;
@end
