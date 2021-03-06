/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, FCCloudContext, NSString;

@interface FCCheckArticleStatusOperation : FCOperation {

	/*^block*/id _checkStatusCompletion;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	FCCloudContext* _context;
	NSString* _articleID;
	long long _resultStatus;

}

@property (nonatomic,retain) FCCloudContext * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * articleID;                            //@synthesize articleID=_articleID - In the implementation block
@property (assign,nonatomic) long long resultStatus;                        //@synthesize resultStatus=_resultStatus - In the implementation block
@property (copy) id checkStatusCompletion;                                  //@synthesize checkStatusCompletion=_checkStatusCompletion - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setArticleID:(NSString *)arg1 ;
-(id)checkStatusCompletion;
-(NSString *)articleID;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithContext:(id)arg1 articleID:(id)arg2 ;
-(FCCloudContext *)context;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(long long)resultStatus;
-(void)setCheckStatusCompletion:(id)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
-(void)setResultStatus:(long long)arg1 ;
@end

