/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ASCodableContactList : PBCodable <NSCopying> {

	NSMutableArray* _contacts;

}

@property (nonatomic,retain) NSMutableArray * contacts;              //@synthesize contacts=_contacts - In the implementation block
+(Class)contactsType;
-(void)mergeFrom:(id)arg1 ;
-(void)setContacts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contacts;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addContacts:(id)arg1 ;
-(id)contactsAtIndex:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearContacts;
-(unsigned long long)contactsCount;
@end
