/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSObject, NSDictionary, ML3MusicLibrary, NSString, NSURL;

@interface ML3Artwork : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	long long _artworkType;
	long long _sourceType;
	NSDictionary* _interestDictionary;
	ML3MusicLibrary* _musicLibrary;
	NSString* _artworkToken;
	NSString* _relativePath;
	NSURL* _originalFileURL;

}

@property (nonatomic,readonly) ML3MusicLibrary * musicLibrary;               //@synthesize musicLibrary=_musicLibrary - In the implementation block
@property (nonatomic,readonly) NSString * artworkToken;                      //@synthesize artworkToken=_artworkToken - In the implementation block
@property (nonatomic,readonly) long long artworkType;                        //@synthesize artworkType=_artworkType - In the implementation block
@property (nonatomic,readonly) long long sourceType;                         //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) NSString * relativePath;                      //@synthesize relativePath=_relativePath - In the implementation block
@property (nonatomic,retain) NSDictionary * interestDictionary;              //@synthesize interestDictionary=_interestDictionary - In the implementation block
@property (nonatomic,readonly) NSURL * originalFileURL;                      //@synthesize originalFileURL=_originalFileURL - In the implementation block
-(unsigned long long)hash;
-(long long)sourceType;
-(NSString *)relativePath;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)originalFileURL;
-(NSDictionary *)interestDictionary;
-(void)setInterestDictionary:(NSDictionary *)arg1 ;
-(id)fileURLForEffect:(id)arg1 ;
-(id)fileURLForSize:(CGSize)arg1 ;
-(id)initWithToken:(id)arg1 artworkType:(long long)arg2 musicLibrary:(id)arg3 ;
-(long long)artworkType;
-(ML3MusicLibrary *)musicLibrary;
-(id)initWithToken:(id)arg1 relativePath:(id)arg2 artworkType:(long long)arg3 musicLibrary:(id)arg4 ;
-(void)_onSerialQueue_faultInProperties;
-(NSString *)artworkToken;
-(id)_interestDataFromInterestDictionary:(id)arg1 ;
-(id)_interestDictionaryFromInterestData:(id)arg1 ;
@end
