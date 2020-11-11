/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPMediaPlaybackItemMetadata.h>

@protocol OS_dispatch_queue;
@class NSObject, MPMediaItem, NSDictionary;

@interface MPMediaLibraryPlaybackItemMetadata : MPMediaPlaybackItemMetadata {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasValidMediaItemValuesForProperties;
	BOOL _hasEvaluatedOfflineHLS;
	BOOL _isOfflineHLS;
	MPMediaItem* _mediaItem;
	NSDictionary* _mediaItemValuesForProperties;
	NSDictionary* _playbackKeys;
	NSObject*<OS_dispatch_queue> _writeQueue;

}

@property (getter=_writeQueue,nonatomic,retain) NSObject*<OS_dispatch_queue> writeQueue;              //@synthesize writeQueue=_writeQueue - In the implementation block
@property (nonatomic,retain) MPMediaItem * mediaItem; 
+(id)streamingPlaybackAssetDestinationFilePathForMediaLibraryPersistentID:(long long)arg1 storeAdamID:(long long)arg2 storeSagaID:(unsigned long long)arg3 assetQuality:(unsigned long long)arg4 assetFlavor:(id)arg5 protectionType:(unsigned long long)arg6 pathExtension:(id)arg7 ;
+(id)_highQualityCachedAssetDestinationDirectory;
+(id)_lowQualityCachedAssetDestinationDirectory;
-(long long)endpointType;
-(id)composerName;
-(id)albumArtistName;
-(id)buyParameters;
-(id)artistName;
-(id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)arg1 returningAssetQuality:(unsigned long long*)arg2 protectionType:(unsigned long long*)arg3 usesPurchaseBundle:(BOOL*)arg4 ;
-(id)_writeQueue;
-(id)init;
-(double)bookmarkTime;
-(unsigned long long)hash;
-(BOOL)isExplicitTrack;
-(id)modelGenericObject;
-(BOOL)showComposer;
-(unsigned long long)storeSagaID;
-(id)albumTitle;
-(id)contentTitle;
-(long long)albumStoreAdamID;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(double)expectedDuration;
-(long long)storeSubscriptionAdamID;
-(long long)artistStoreAdamID;
-(id)copyrightText;
-(unsigned long long)contentType;
-(BOOL)isEqual:(id)arg1 ;
-(id)protectedContentSupportStorageURL;
-(unsigned long long)storeAccountID;
-(long long)downloadIdentifier;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(long long)storeAdamID;
-(id)_mediaItemValuesForProperties;
-(id)initWithMediaItem:(id)arg1 ;
-(BOOL)prefersStoreContentInfo;
-(id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long*)arg1 protectionType:(unsigned long long*)arg2 usesPurchaseBundle:(BOOL*)arg3 ;
-(id)hlsPlaylistURLString;
-(id)hlsOfflinePlaybackKeys;
-(BOOL)isOfflineHLS;
-(BOOL)isSubscriptionRequired;
-(void)setWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)iTunesStoreContentID;
-(id)iTunesStoreContentDSID;
-(id)localNetworkContentURL;
-(long long)mediaLibraryPersistentID;
-(void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldRememberBookmarkTime;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(BOOL)shouldReportPlayEventsToStore;
-(id)storeUbiquitousIdentifier;
-(float)volumeNormalization;
-(id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4 ;
-(void)_persistURI:(id)arg1 persistentContentKey:(id)arg2 ;
-(void)_invalidateMediaItemProperties;
-(id)_onqueue_mediaItemValuesForProperties;
-(MPMediaItem *)mediaItem;
-(void)dealloc;
@end
