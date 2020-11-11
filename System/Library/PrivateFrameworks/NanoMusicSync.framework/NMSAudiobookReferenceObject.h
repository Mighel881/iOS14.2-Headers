/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber;

@interface NMSAudiobookReferenceObject : NSObject {

	NSNumber* _audiobookIdentifier;
	unsigned long long _downloadLimit;

}

@property (nonatomic,readonly) NSNumber * audiobookIdentifier;              //@synthesize audiobookIdentifier=_audiobookIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long downloadLimit;              //@synthesize downloadLimit=_downloadLimit - In the implementation block
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)audiobookIdentifier;
-(unsigned long long)downloadLimit;
-(id)initWithAudiobookIdentifier:(id)arg1 downloadLimit:(unsigned long long)arg2 ;
-(id)audiobookMediaItem;
-(void)setDownloadLimit:(unsigned long long)arg1 ;
@end
