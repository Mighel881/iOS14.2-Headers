/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WBSSiteMetadataProvider.h>

@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;
@class NSObject, NSMutableDictionary, NSArray, UIColor, NSString;

@interface WBSBookmarkFolderTouchIconProvider : NSObject <WBSSiteMetadataProvider> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableDictionary* _requestsToRequestInfos;
	NSMutableDictionary* _folderUUIDsToTouchIconInfo;
	id<WBSSiteMetadataProviderDelegate> _providerDelegate;

}

@property (nonatomic,readonly) NSArray * allFolderUUIDs; 
@property (readonly) UIColor * backgroundColor; 
@property (__weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;              //@synthesize providerDelegate=_providerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL providesFavicons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_appUsesLeftToRightLayout;
-(id)init;
-(id)defaultFolderIconForRequest:(id)arg1 ;
-(id<WBSSiteMetadataProviderDelegate>)providerDelegate;
-(void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2 ;
-(UIColor *)backgroundColor;
-(BOOL)canHandleRequest:(id)arg1 ;
-(id)displayableFolderContentsForRequest:(id)arg1 ;
-(void)stopWatchingUpdatesForRequest:(id)arg1 ;
-(id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL*)arg2 ;
-(void)setProviderDelegate:(id<WBSSiteMetadataProviderDelegate>)arg1 ;
-(id)bookmarkUUIDForRequest:(id)arg1 ;
-(void)removeInfoForFolderWithUUID:(id)arg1 ;
-(NSArray *)allFolderUUIDs;
-(void)removeInfoForFoldersWithUUIDs:(id)arg1 ;
-(id)touchIconRequestForBookmark:(id)arg1 inFolderWithRequest:(id)arg2 ;
-(void)_prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2 ;
-(/*^block*/id)_responseHandlerForRequest:(id)arg1 thumbnailIndex:(unsigned long long)arg2 ;
-(void)_coalesceResponseDispatchForRequest:(id)arg1 ;
-(void)_dispatchResponseForRequest:(id)arg1 ;
-(void)_dispatchResponseForRequest:(id)arg1 touchIcon:(id)arg2 ;
-(id)_drawTouchIconForRequest:(id)arg1 ;
-(void)didCreateTouchIcon:(id)arg1 ;
@end

