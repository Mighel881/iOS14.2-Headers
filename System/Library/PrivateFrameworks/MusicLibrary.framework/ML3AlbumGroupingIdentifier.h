/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying> {

	BOOL _compilation;
	long long _albumArtistPersistentID;
	NSData* _groupingKey;
	NSString* _feedURL;
	long long _seasonNumber;

}

@property (nonatomic,readonly) long long albumArtistPersistentID;              //@synthesize albumArtistPersistentID=_albumArtistPersistentID - In the implementation block
@property (nonatomic,readonly) NSData * groupingKey;                           //@synthesize groupingKey=_groupingKey - In the implementation block
@property (nonatomic,readonly) NSString * feedURL;                             //@synthesize feedURL=_feedURL - In the implementation block
@property (nonatomic,readonly) long long seasonNumber;                         //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,readonly) BOOL compilation;                               //@synthesize compilation=_compilation - In the implementation block
@property (nonatomic,readonly) NSData * keyValue; 
-(long long)seasonNumber;
-(unsigned long long)hash;
-(long long)albumArtistPersistentID;
-(id)description;
-(NSString *)feedURL;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)keyValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)compilation;
-(id)initWithAlbumArtistPersistentID:(long long)arg1 groupingKey:(id)arg2 feedURL:(id)arg3 seasonNumber:(long long)arg4 compilation:(BOOL)arg5 ;
-(NSData *)groupingKey;
@end
