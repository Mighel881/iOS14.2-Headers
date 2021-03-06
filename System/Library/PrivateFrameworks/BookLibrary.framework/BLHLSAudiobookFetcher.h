/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURLSession;

@interface BLHLSAudiobookFetcher : NSObject {

	NSURLSession* _session;

}

@property (nonatomic,readonly) NSURLSession * session;              //@synthesize session=_session - In the implementation block
+(id)preferredStreamFromMasterPlaylist:(id)arg1 ;
-(id)initCanUseCellularData:(BOOL)arg1 powerRequired:(BOOL)arg2 bundleID:(id)arg3 ;
-(id)setupDownloadTaskForFetchingMasterPlaylistAndSelectingStreamFromMasterPlaylistURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURLSession *)session;
@end

