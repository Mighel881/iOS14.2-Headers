/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CUTFileCopierDelegate;
@class NSURL;

@interface CUTFileCopier : NSObject {

	BOOL _shouldCancel;
	BOOL _didErrorOccur;
	BOOL _inProgress;
	unsigned _operation;
	id<CUTFileCopierDelegate> _delegate;
	NSURL* _inputURL;
	NSURL* _outputURL;
	id _identifier;
	void* _BOMCopier;

}

@property (assign) void* _BOMCopier;                                //@synthesize BOMCopier=_BOMCopier - In the implementation block
@property (assign) BOOL inProgress;                                 //@synthesize inProgress=_inProgress - In the implementation block
@property (assign) unsigned operation;                              //@synthesize operation=_operation - In the implementation block
@property (__weak) id<CUTFileCopierDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSURL * inputURL;                         //@synthesize inputURL=_inputURL - In the implementation block
@property (copy,readonly) NSURL * outputURL;                        //@synthesize outputURL=_outputURL - In the implementation block
@property (readonly) id identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL wasCancelled;                   //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (nonatomic,readonly) BOOL didErrorOccur;                  //@synthesize didErrorOccur=_didErrorOccur - In the implementation block
-(void)start;
-(void)setOperation:(unsigned)arg1 ;
-(BOOL)inProgress;
-(id<CUTFileCopierDelegate>)delegate;
-(NSURL *)inputURL;
-(void*)_BOMCopier;
-(void)_fillOutputURLFromInputURL;
-(id)_temporaryCopierPath;
-(void)_worker_doCopy;
-(BOOL)wasCancelled;
-(void)_main_copierFinishedWithResult:(id)arg1 ;
-(id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned)arg4 delegate:(id)arg5 ;
-(void)set_BOMCopier:(void*)arg1 ;
-(BOOL)didErrorOccur;
-(id)identifier;
-(void)cleanup;
-(void)setInProgress:(BOOL)arg1 ;
-(void)setDelegate:(id<CUTFileCopierDelegate>)arg1 ;
-(unsigned)operation;
-(void)cancel;
-(NSURL *)outputURL;
-(void)dealloc;
@end
