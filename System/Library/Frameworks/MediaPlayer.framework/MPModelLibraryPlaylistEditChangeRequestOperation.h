/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryPlaylistEditChangeRequest;

@interface MPModelLibraryPlaylistEditChangeRequestOperation : MPAsyncOperation {

	MPModelLibraryPlaylistEditChangeRequest* _request;
	/*^block*/id _localPersistenceResponseHandler;
	/*^block*/id _completeResponseHandler;

}

@property (nonatomic,copy) MPModelLibraryPlaylistEditChangeRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id localPersistenceResponseHandler;                             //@synthesize localPersistenceResponseHandler=_localPersistenceResponseHandler - In the implementation block
@property (nonatomic,copy) id completeResponseHandler;                                     //@synthesize completeResponseHandler=_completeResponseHandler - In the implementation block
+(id)requiredPlaylistEntryProperties;
-(void)execute;
-(MPModelLibraryPlaylistEditChangeRequest *)request;
-(BOOL)_isCloudLibraryEnabled;
-(void)setRequest:(MPModelLibraryPlaylistEditChangeRequest *)arg1 ;
-(id)localPersistenceResponseHandler;
-(void)setLocalPersistenceResponseHandler:(id)arg1 ;
-(id)completeResponseHandler;
-(void)setCompleteResponseHandler:(id)arg1 ;
@end

