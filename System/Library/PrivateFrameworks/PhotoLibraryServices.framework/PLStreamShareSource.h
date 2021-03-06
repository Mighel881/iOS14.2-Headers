/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PLSandboxedURL, NSData, NSString, NSURL, PFVideoComplement;

@interface PLStreamShareSource : NSObject {

	PLSandboxedURL* _sandboxedMediaURL;
	PLSandboxedURL* _sandboxedVideoComplementImageURL;
	PLSandboxedURL* _sandboxedVideoComplementVideoURL;
	NSData* _mediaData;
	NSString* _fileExtension;
	NSURL* _mediaURL;
	PFVideoComplement* _videoComplement;
	long long _mediaType;

}

@property (nonatomic,retain) NSData * mediaData;                               //@synthesize mediaData=_mediaData - In the implementation block
@property (nonatomic,retain) NSString * fileExtension;                         //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                                 //@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,retain) PFVideoComplement * videoComplement;              //@synthesize videoComplement=_videoComplement - In the implementation block
@property (assign,nonatomic) long long mediaType;                              //@synthesize mediaType=_mediaType - In the implementation block
-(void)setMediaType:(long long)arg1 ;
-(long long)mediaType;
-(id)photoLibrary;
-(NSURL *)mediaURL;
-(id)initWithDictionary:(id)arg1 ;
-(void)setMediaURL:(NSURL *)arg1 ;
-(void)_cleanupIfNeededMediaAtURL:(id)arg1 ;
-(void)cleanupResources;
-(PFVideoComplement *)videoComplement;
-(void)setVideoComplement:(PFVideoComplement *)arg1 ;
-(NSString *)fileExtension;
-(NSData *)mediaData;
-(void)setFileExtension:(NSString *)arg1 ;
-(id)serializedDictionary;
-(void)setMediaData:(NSData *)arg1 ;
@end

