/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXAnalyticsEvent.h>

@class NSString, NSDictionary;

@interface SXMediaEvent : SXAnalyticsEvent {

	unsigned long long _mediaType;
	unsigned long long _galleryType;
	unsigned long long _videoType;
	NSString* _mediaId;
	NSString* _componentIdentifier;
	NSString* _componentType;
	NSString* _componentRole;
	NSDictionary* _metaData;

}

@property (assign,nonatomic) unsigned long long mediaType;                //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) unsigned long long galleryType;              //@synthesize galleryType=_galleryType - In the implementation block
@property (assign,nonatomic) unsigned long long videoType;                //@synthesize videoType=_videoType - In the implementation block
@property (nonatomic,retain) NSString * mediaId;                          //@synthesize mediaId=_mediaId - In the implementation block
@property (nonatomic,retain) NSString * componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (nonatomic,retain) NSString * componentType;                    //@synthesize componentType=_componentType - In the implementation block
@property (nonatomic,retain) NSString * componentRole;                    //@synthesize componentRole=_componentRole - In the implementation block
@property (nonatomic,retain) NSDictionary * metaData;                     //@synthesize metaData=_metaData - In the implementation block
-(void)setMediaType:(unsigned long long)arg1 ;
-(NSString *)componentType;
-(unsigned long long)mediaType;
-(NSString *)mediaId;
-(NSDictionary *)metaData;
-(void)setMediaId:(NSString *)arg1 ;
-(unsigned long long)galleryType;
-(void)setGalleryType:(unsigned long long)arg1 ;
-(unsigned long long)videoType;
-(void)setVideoType:(unsigned long long)arg1 ;
-(void)setComponentType:(NSString *)arg1 ;
-(void)setMetaData:(NSDictionary *)arg1 ;
-(NSString *)componentIdentifier;
-(NSString *)componentRole;
-(void)setComponentIdentifier:(NSString *)arg1 ;
-(void)setComponentRole:(NSString *)arg1 ;
@end

