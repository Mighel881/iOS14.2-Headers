/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPModelObject.h>

@class NSString, NSURL, MPModelPodcastAuthor;

@interface MPModelPodcast : MPModelObject

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSURL * feedURL; 
@property (nonatomic,copy) NSURL * shareURL; 
@property (assign,nonatomic) BOOL supportsSubscription; 
@property (nonatomic,retain) MPModelPodcastAuthor * author; 
@property (nonatomic,copy) id artworkCatalogBlock; 
+(id)__title_KEY;
+(id)__feedURL_KEY;
+(id)__shareURL_KEY;
+(id)__supportsSubscription_KEY;
+(id)__author_KEY;
+(id)kindWithEpisodeKind:(id)arg1 ;
+(id)__artworkCatalogBlock_KEY;
-(id)humanDescription;
-(id)artworkCatalog;
@end

