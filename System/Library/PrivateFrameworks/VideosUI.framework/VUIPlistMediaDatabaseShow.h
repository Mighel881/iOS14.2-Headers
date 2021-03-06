/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIPlistMediaDatabaseEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface VUIPlistMediaDatabaseShow : VUIPlistMediaDatabaseEntity <NSCopying> {

	NSArray* _seasons;

}

@property (nonatomic,retain) NSArray * seasons;              //@synthesize seasons=_seasons - In the implementation block
-(id)isLocal;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSArray *)seasons;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSeasons:(NSArray *)arg1 ;
-(id)seasonForIdentifier:(id)arg1 ;
@end

