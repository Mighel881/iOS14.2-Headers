/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAVItem.h>

@class NSString;

@interface MPPlaceholderAVItem : MPAVItem {

	BOOL _explicitTrack;
	BOOL _likeStateEnabled;
	BOOL _supportsLikedState;
	BOOL _tailPlaceholder;
	NSString* _album;
	NSString* _artist;
	double _durationFromExternalMetadata;
	NSString* _mainTitle;
	/*^block*/id _artworkCatalogBlock;

}

@property (assign,getter=isTailPlaceholder,nonatomic) BOOL tailPlaceholder;                  //@synthesize tailPlaceholder=_tailPlaceholder - In the implementation block
@property (nonatomic,retain) NSString * album;                                               //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) NSString * artist;                                              //@synthesize artist=_artist - In the implementation block
@property (assign,nonatomic) double durationFromExternalMetadata;                            //@synthesize durationFromExternalMetadata=_durationFromExternalMetadata - In the implementation block
@property (assign,getter=isExplicitTrack,nonatomic) BOOL explicitTrack;                      //@synthesize explicitTrack=_explicitTrack - In the implementation block
@property (assign,getter=isLikedStateEnabled,nonatomic) BOOL likedStateEnabled;              //@synthesize likeStateEnabled=_likeStateEnabled - In the implementation block
@property (nonatomic,retain) NSString * mainTitle;                                           //@synthesize mainTitle=_mainTitle - In the implementation block
@property (assign,nonatomic) BOOL supportsLikedState;                                        //@synthesize supportsLikedState=_supportsLikedState - In the implementation block
@property (nonatomic,copy) id artworkCatalogBlock;                                           //@synthesize artworkCatalogBlock=_artworkCatalogBlock - In the implementation block
+(BOOL)isPlaceholder;
-(id)init;
-(NSString *)mainTitle;
-(void)loadAssetAndPlayerItem;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isExplicitTrack;
-(double)durationFromExternalMetadata;
-(BOOL)isLikedStateEnabled;
-(BOOL)supportsLikedState;
-(BOOL)isTailPlaceholder;
-(NSString *)album;
-(void)setAlbum:(NSString *)arg1 ;
-(id)artworkCatalogBlock;
-(id)description;
-(void)setMainTitle:(NSString *)arg1 ;
-(void)setExplicitTrack:(BOOL)arg1 ;
-(void)setDurationFromExternalMetadata:(double)arg1 ;
-(void)setLikedStateEnabled:(BOOL)arg1 ;
-(void)setSupportsLikedState:(BOOL)arg1 ;
-(void)setTailPlaceholder:(BOOL)arg1 ;
-(void)setArtworkCatalogBlock:(id)arg1 ;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
@end
