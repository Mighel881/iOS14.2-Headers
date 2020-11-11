/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface _MPHomeSharingArtworkCacheKey : NSObject {

	unsigned long long _persistentID;
	CGSize _size;

}

@property (nonatomic,readonly) unsigned long long persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) CGSize size;                                  //@synthesize size=_size - In the implementation block
-(unsigned long long)hash;
-(unsigned long long)persistentID;
-(CGSize)size;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPersistentID:(unsigned long long)arg1 size:(CGSize)arg2 ;
@end
