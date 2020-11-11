/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _NMRPlaybackQueue : PBCodable <NSCopying> {

	NSMutableArray* _contentItems;
	int _location;
	SCD_Struct_NM12 _has;

}

@property (assign,nonatomic) BOOL hasLocation; 
@property (assign,nonatomic) int location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentItems;              //@synthesize contentItems=_contentItems - In the implementation block
+(Class)contentItemType;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasLocation:(BOOL)arg1 ;
-(unsigned long long)hash;
-(int)location;
-(id)dictionaryRepresentation;
-(BOOL)hasLocation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLocation:(int)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)contentItems;
-(void)writeTo:(id)arg1 ;
-(void)setContentItems:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addContentItem:(id)arg1 ;
-(unsigned long long)contentItemsCount;
-(void)clearContentItems;
-(id)contentItemAtIndex:(unsigned long long)arg1 ;
@end
