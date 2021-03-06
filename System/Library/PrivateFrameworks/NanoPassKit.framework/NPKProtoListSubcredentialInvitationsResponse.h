/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoListSubcredentialInvitationsResponse : PBCodable <NSCopying> {

	NSMutableArray* _subcredentialInvitationsDatas;

}

@property (nonatomic,retain) NSMutableArray * subcredentialInvitationsDatas;              //@synthesize subcredentialInvitationsDatas=_subcredentialInvitationsDatas - In the implementation block
+(Class)subcredentialInvitationsDataType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addSubcredentialInvitationsData:(id)arg1 ;
-(unsigned long long)subcredentialInvitationsDatasCount;
-(void)clearSubcredentialInvitationsDatas;
-(id)subcredentialInvitationsDataAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)subcredentialInvitationsDatas;
-(void)setSubcredentialInvitationsDatas:(NSMutableArray *)arg1 ;
@end

