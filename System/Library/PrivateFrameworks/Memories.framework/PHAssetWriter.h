/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHAssetRepresentation, NSURL;

@interface PHAssetWriter : NSObject {

	BOOL _networkAccessAllowed;
	BOOL _stop;
	PHAssetRepresentation* _assetRepresentation;
	NSURL* _destinationURL;
	NSURL* _sourceUrl;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) PHAssetRepresentation * assetRepresentation;              //@synthesize assetRepresentation=_assetRepresentation - In the implementation block
@property (nonatomic,retain) NSURL * sourceUrl;                                        //@synthesize sourceUrl=_sourceUrl - In the implementation block
@property (assign) BOOL stop;                                                          //@synthesize stop=_stop - In the implementation block
@property (nonatomic,copy) id progressHandler;                                         //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSURL * destinationURL;                                   //@synthesize destinationURL=_destinationURL - In the implementation block
@property (assign,nonatomic) BOOL networkAccessAllowed;                                //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
+(id)assetWriterForIdentifierURL:(id)arg1 ;
+(id)assetWriterForAssetRepresentation:(id)arg1 ;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(id)request;
-(id)write;
-(void)setSourceUrl:(NSURL *)arg1 ;
-(id)progressHandler;
-(id)completionHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)setStop:(BOOL)arg1 ;
-(id)transfer;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(BOOL)stop;
-(BOOL)networkAccessAllowed;
-(NSURL *)sourceUrl;
-(NSURL *)destinationURL;
-(id)initWithSourceURL:(id)arg1 ;
-(void)stopWriting;
-(id)initWithAssetRepresentation:(id)arg1 ;
-(unsigned long long)estimatedOutputSizeWithError:(id*)arg1 ;
-(void)setAssetRepresentation:(PHAssetRepresentation *)arg1 ;
-(void)startWritingWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(PHAssetRepresentation *)assetRepresentation;
@end
