/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BRCExtensionErrorPayload : PBCodable <NSCopying> {

	NSString* _minimumOSName;
	NSString* _recordId;

}

@property (nonatomic,readonly) BOOL hasMinimumOSName; 
@property (nonatomic,retain) NSString * minimumOSName;              //@synthesize minimumOSName=_minimumOSName - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordId; 
@property (nonatomic,retain) NSString * recordId;                   //@synthesize recordId=_recordId - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasRecordId;
-(id)dictionaryRepresentation;
-(void)setRecordId:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(NSString *)recordId;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMinimumOSName:(NSString *)arg1 ;
-(BOOL)hasMinimumOSName;
-(NSString *)minimumOSName;
@end

