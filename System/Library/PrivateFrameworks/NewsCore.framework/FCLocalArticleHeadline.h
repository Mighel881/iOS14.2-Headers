/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCHeadline.h>

@protocol FCChannelProviding;
@class FCHeadlineThumbnail, NSDictionary, NSString;

@interface FCLocalArticleHeadline : FCHeadline {

	BOOL _webEmbedsEnabled;
	FCHeadlineThumbnail* _thumbnail;
	NSDictionary* _dictionary;
	NSString* _path;
	id<FCChannelProviding> _channel;

}

@property (nonatomic,readonly) NSDictionary * dictionary;                   //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * path;                             //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) id<FCChannelProviding> channel;              //@synthesize channel=_channel - In the implementation block
-(id)iAdKeywords;
-(double)videoDuration;
-(BOOL)isSponsored;
-(id)initWithDictionary:(id)arg1 path:(id)arg2 channel:(id)arg3 ;
-(CGSize)thumbnailSize;
-(id)sourceChannel;
-(id<FCChannelProviding>)channel;
-(id)topicIDs;
-(id)articleID;
-(BOOL)isFeatureCandidate;
-(id)sourceName;
-(id)thumbnailAssetHandle;
-(id)primaryAudience;
-(id)iAdSectionIDs;
-(id)allowedStorefrontIDs;
-(BOOL)isLocalDraft;
-(BOOL)isDeleted;
-(id)thumbnail;
-(BOOL)webEmbedsEnabled;
-(id)identifier;
-(id)accessoryText;
-(BOOL)isPremium;
-(NSDictionary *)dictionary;
-(id)blockedStorefrontIDs;
-(id)contentURL;
-(id)videoURL;
-(id)localDraftPath;
-(BOOL)isDraft;
-(BOOL)hasThumbnail;
-(id)publishDate;
-(id)shortExcerpt;
-(id)contentManifestWithContext:(id)arg1 ;
-(id)surfacedByBinID;
-(unsigned long long)contentType;
-(id)iAdCategories;
-(BOOL)useTransparentNavigationBar;
-(id)title;
-(id)lastModifiedDate;
-(NSString *)path;
@end
