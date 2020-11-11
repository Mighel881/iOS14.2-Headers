/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSArray, MPStoreArtworkRequestToken, NSString;

@interface MPStoreItemMovieClip : NSObject {

	NSDictionary* _lookupDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * lookupDictionary;                                      //@synthesize lookupDictionary=_lookupDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assets; 
@property (nonatomic,copy,readonly) MPStoreArtworkRequestToken * previewArtworkRequestToken; 
@property (nonatomic,copy,readonly) NSString * title; 
-(NSArray *)assets;
-(NSDictionary *)lookupDictionary;
-(id)initWithLookupDictionary:(id)arg1 ;
-(MPStoreArtworkRequestToken *)previewArtworkRequestToken;
-(NSString *)title;
@end
